#include "usart.h"
#include "hardwareoutput.h"

struct HardwareOutput::PrivateData {
  Usart usart;
  explicit PrivateData() noexcept : usart(19200) {};
};
static HardwareOutput::PrivateData privData;

HardwareOutput::HardwareOutput() noexcept : BaseLayer(), data (privData) {
}
void HardwareOutput::Init() {
  data.usart.SetRS485(false);
}
uint32_t HardwareOutput::Down(const char * ldata, const uint32_t len) {
  return data.usart.Down (ldata, len);
}
