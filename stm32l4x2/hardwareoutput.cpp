#include <stdint.h>
#include "usbd.h"
#include "cdc_class.h"
#include "hardwareoutput.h"

//! [HiddenImplemntationExampleImpl]
struct HardwareOutput::PrivateData {
  usbd_device udev;         // USB core
  cdc_class   cdc_acm;      // serial class
  explicit PrivateData() noexcept : udev(), cdc_acm(udev) {};
};
static HardwareOutput::PrivateData privData;  // statická instance privátní třídy
// Konstruktor
HardwareOutput::HardwareOutput() noexcept : BaseLayer(), data (privData) {
  // pokud bych používal haldu, bylo by to opravdu privátní, místo statické instance něco jako
  // data = * new HardwareOutput::PrivateData();
}
void HardwareOutput::Init() {
  data.udev.attach  (data.cdc_acm); // není možné dát do konstruktoru,
  data.cdc_acm.init ();             // závisí na pořadí volání.
}
uint32_t HardwareOutput::Down(const char * ldata, const uint32_t len) {
  return data.cdc_acm.Down (ldata, len);      // jen přeposlat, kam to patří
}
//! [HiddenImplemntationExampleImpl]
