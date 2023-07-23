#ifndef HARDWAREOUTPUT_H
#define HARDWAREOUTPUT_H
#include "baselayer.h"
//! [HiddenImplemntationExampleDecl]
//! @file hardwarehutput.h
/** @class HardwareOutput
 *  @brief Skrytá implementace.
 * 
 * Obal na něco, co dopředu přesně neznáme a v jednotlivostech se může lišit.
 * */
class HardwareOutput : public BaseLayer {
  public:   // pokud bychom používali haldu, nemuselo by být public
    struct PrivateData; // zde nemusí být zřejmé, co v tt. struktuře je
    PrivateData & data; // protože zde používáme jen odkaz (příp. ukazatel)
  public:
    explicit HardwareOutput () noexcept;
    void     Init           ();
    uint32_t Down           (const char * data, const uint32_t len) override;
};
//! [HiddenImplemntationExampleDecl]

#endif // HARDWAREOUTPUT_H
