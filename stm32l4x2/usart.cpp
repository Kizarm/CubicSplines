#include <stdint.h>
#include "usbd.h"
#include "cdc_class.h"
#include "usart.h"

/* Abych se nemusel vrtat v původních zdrojácích, je USB CDC
 * Takto zabaleno sem. Nevypadá to hezky, ale funguje to.
 * */

static usbd_device udev;
static cdc_class   cdc_acm (udev);

Usart::Usart(const uint32_t baud) noexcept : tx_ring() {
}

uint32_t Usart::Down (const char * data, const uint32_t len) {
  return cdc_acm.Down (data, len);
}
void Usart::SetRS485(const bool ) const {
  udev.attach  (cdc_acm); // není možné dát do konstruktoru,
  cdc_acm.init ();        // závisí na pořadí volání.
}

void Usart::irq() {
}
void Usart::SetHalfDuplex(const bool ) const {
}

