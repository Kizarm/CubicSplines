#include <cstdio>
#include "usart.h"

Usart::Usart(const uint32_t baud) noexcept : tx_ring() {
}

uint32_t Usart::Down (const char * data, const uint32_t len) {
  uint32_t res = ::fwrite (data, 1, len, stdout);
  return res;
}
void Usart::SetRS485(const bool polarity) const {
}

Usart::~Usart() {
}
