#ifndef _GPIO_CLASS_H_
#define _GPIO_CLASS_H_
#include "CH32V20xxx.h"

enum GPIO_MODE : uint32_t {
  GPIO_Speed_In    = 0u,
  GPIO_Speed_10MHz = 1u,
  GPIO_Speed_2MHz  = 2u,
  GPIO_Speed_50MHz = 3u,
};
enum GPIO_CNF : uint32_t {
  GPIO_AI_PPO    = 0u,
  GPIO_FI_ODO    = 1u << 2,
  GPIO_UPDI_MPPO = 2u << 2,
  GPIO_none_MPDO = 3u << 2,
};
enum GPIOPuPd_TypeDef {
  GPIO_PuPd_NOPULL = 0x00,
  GPIO_PuPd_UP     = 0x01,
  GPIO_PuPd_DOWN   = 0x02
};

class GpioClass {
  GPIOA_Type   & port;
  const uint32_t pin;
  public:
    explicit GpioClass (GPIOA_Type & _port, const uint32_t _pin, const uint32_t _mode = GPIO_AI_PPO | GPIO_Speed_10MHz) noexcept
    : port(_port), pin(_pin) {
      /* Zapneme vše, ono je to dost jedno. */
      RCC.APB2PCENR.modify([](RCC_Type::APB2PCENR_DEF & r)->auto {
        r.B.IOPAEN = SET;
        r.B.IOPBEN = SET;
      //r.B.IOPCEN = SET;
        return r.R;
      });
      if (pin < 8u) {
        const uint32_t pos = pin << 2;
        port.CFGLR.modify([=](GPIOA_Type::CFGLR_DEF & r)->auto {
          uint32_t t = r.R;
          t &= ~(0xFu << pos);
          t |= _mode  << pos;
          return t;
        });
      } else {
        const uint32_t pos = (pin - 8u) << 2;
        port.CFGHR.modify([=](GPIOA_Type::CFGHR_DEF & r)->auto {
          uint32_t t = r.R;
          t &= ~(0xFu << pos);
          t |= _mode  << pos;
          return t;
        });
      }
    }
    void operator<< (const bool b) const {
      port.BSHR.R = b ? 1u << pin : 1u << (pin + 16);
    }
    operator bool () const {
      return port.INDR.R & (1u << pin);
    }
    void setPuPd (GPIOPuPd_TypeDef p) {
      if (p != GPIO_PuPd_UP) return;
      port.OUTDR.R |= 1u << pin;
    }
};

#endif // _GPIO_CLASS_H_
