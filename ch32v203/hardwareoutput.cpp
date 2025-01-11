#include "hardwareoutput.h"
#include "ctrlinterface.h"
#include "cdc_class.h"
#include "gpio.h"

class Indicator : public CDC_CtrlInterface {
  GpioClass led;
  public:
    explicit Indicator () : CDC_CtrlInterface(), led(GPIOB, 5) {}
    bool IOCtrl(const CTRL_TYPES_DEF type, const void * data, const uint32_t len) override {
      if (type == USB_USART_SET_DTR_RTS) {
        const uint16_t & sig = * reinterpret_cast<const uint16_t*>(data);
        if (sig & 1) led << true;
        else         led << false;
        return true;
      }
      return false;
    }
};

struct HardwareOutput::PrivateData {
  Indicator ind;
  cdc_class cdc;
  GpioClass pwr;
  explicit PrivateData() noexcept : ind(), cdc(), pwr(GPIOB, 4) {
    pwr << true;
    cdc.attach(ind);    
  };
};
static HardwareOutput::PrivateData privData;

HardwareOutput::HardwareOutput() noexcept : BaseLayer(), data (privData) {
}
void HardwareOutput::Init() {
  data.cdc.init();
}
uint32_t HardwareOutput::Down(const char * ldata, const uint32_t len) {
  return data.cdc.Down(ldata, len);
}
