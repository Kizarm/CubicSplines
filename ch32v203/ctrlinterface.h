#ifndef CTRLINTERFACE_DEF_H
#define CTRLINTERFACE_DEF_H
#include <stdint.h>
enum CTRL_TYPES_DEF {
  UNKNOWN_TYPE = 0,
  USB_USART_SET_PARAM,
  USB_USART_SET_DTR_RTS,
  USB_USART_INIT,
};
static_assert (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__, "Bad ENDIAN");
struct USB_CDC_LineCoding {
  uint32_t baud;
  uint8_t  stop, parity, data;
  explicit USB_CDC_LineCoding () noexcept : baud (57600u), stop (0u), parity (0u), data (8u) {}
}__attribute__((packed));
static_assert (sizeof(USB_CDC_LineCoding) == 7, "USB_CDC_LineCoding size error");
/** @class CtrlInterface
 * Abstraktní interface, které je možné podědit třeba ve třídě USART a pomocí
 * jediné virtuální metody zadefinovat chování při událostech měnících parametry
 * přenosu, přicházejících po USB. Fakticky místo callback funkce, nutí to
 * IOCtrl() opravdu přetížit.
 * Je to mimo třídu BaseLayer, protože Up třída nemusí být totožná s kontrolní.
 * V cdc_class se proto musí nastavit na toto ukazatel pomocí metody attach().
 * */
class CDC_CtrlInterface {
  public:
    virtual bool IOCtrl (const CTRL_TYPES_DEF type, const void * data, const uint32_t len) = 0;
};

#endif // CTRLINTERFACE_DEF_H
