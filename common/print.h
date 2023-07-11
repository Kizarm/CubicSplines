#ifndef PRINT_H
#define PRINT_H

typedef __SIZE_TYPE__ size_t;
#include "baselayer.h"
//! [NameSpaceExample]
#include "real_fix.h"
#include "real_flt.h"
// Zde je možné vybrat si, zda se to bude počítat v pevné
// nebo pohyblivé řádové čárce. Pro Cortex-M0 stačí pevná, je to de facto int32_t.
   using namespace FIX;
// using namespace FLT;
//! [NameSpaceExample]

constexpr const char * EOL = "\r\n";
constexpr unsigned  BUFLEN = 64;

/**
 * @file print.h
 * @class Print
 * @brief Něco jako ostream.
 * 
 */

/// Základy pro zobrazení čísla.
enum PrintBases {
  BIN=1, OCT=3, DEC=10, HEX=4
};

class Print : public BaseLayer {
  public:
    /// Konstruktor @param b Default decimální výpisy.
    explicit Print  (PrintBases b = DEC) noexcept;
    /// @brief Blokování výstupu
    /// @param buf Ukazatel na data
    /// @param len Délka přenášených dat
    /// @return Počet přenesených bytů (rovno len)
    uint32_t  BlockDown   (const char * buf, uint32_t len);
//! [OperatorOverloadExample]
    /// @brief Výstup řetězce bytů
    /// @param str Ukazatel na řetězec
    /// @return Odkaz na tuto třídu kvůli řetězení.
    Print &    operator << (const char * str);
    /// @brief Výstup celého čísla podle base
    /// @param num Číslo
    /// @return Odkaz na tuto třídu kvůli řetězení.
    Print &    operator << (const int    num);
    Print &    operator << (const real & num);
    Print &    operator << (const char   c);
    /// @brief Změna základu pro výstup čísla
    /// @param num enum PrintBases
    /// @return Odkaz na tuto třídu kvůli řetězení.
    Print &    operator << (const PrintBases num);
//! [OperatorOverloadExample]
    void out (const void* p, uint32_t l);
    void outWithCR (const char * str);
  private:
    PrintBases base;    //!< Základ pro výstup čísla.
    char  buf[BUFLEN];  //!< Buffer pro výstup čísla.
};

#endif // PRINT_H
