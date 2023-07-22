#include <cstdio>
#include "hardwareoutput.h"
//! [HiddenImplemntationExampleUnix]
struct HardwareOutput::PrivateData {
  explicit PrivateData() noexcept {};
};
static HardwareOutput::PrivateData privData;

HardwareOutput::HardwareOutput() noexcept : BaseLayer(), data (privData) {
}
void HardwareOutput::Init() {
}
uint32_t HardwareOutput::Down(const char * ldata, const uint32_t len) {
  const uint32_t res = ::fwrite(ldata, 1, len, stdout);
  return res;
}
//! [HiddenImplemntationExampleUnix]
