#include "main.h"
//! [VarArgExampleDef]
// Naměřené hodnoty termočlánek K - pro dostatečnou přesnost stačí krok 20 °C
static constexpr Pair meassure[] = {
  {-20 , -757  }, // pár je vždy teplota ve °C a napětí článku v μV
  { 0  , 0     },
  { 20 , 790   },
  { 40 , 1612  },
  { 80 , 3358  },
  { 120, 5228  },
  { 160, 7209  },
  { 220, 10362 },
  { 280, 13709 },
  { 320, 16032 },
  { 360, 18422 },
  { 380, 19641 },
  { 400, 20872 },
  { 420, 22110 },
};
/////////////////////////////////////////////////////////////////
static const SPLINE<array_size (meassure)> dcs (meassure, false);
static Print           console (DEC);
//! [VarArgExampleDef]
static HardwareOutput  usart;
/////////////////////////////////////////////////////////////////
//! [LoremIpsumExample]
static constexpr const char * Intro = R"-!-(
Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Curabitur sagittis hendrerit ante.
Sed vel lectus. Donec odio tempus molestie, porttitor ut, iaculis quis, sem. Aliquam erat
volutpat. Sed vel lectus. Donec odio tempus molestie, porttitor ut, iaculis quis, sem.
)-!-";
//! [LoremIpsumExample]
//! [VarArgExample]
namespace fmt {
  // Silně zjednodušeno, % jen naznačuje přítomnost parametru v seznamu 
  constexpr void print (const char * fmt) {   // ukončení rekurze když už zádný parametr nezbyl
    for (;;) {
      const char c = *fmt++;
      if (c == '\0') break;
      console << c;
    }
  }
  template<typename First, typename ... Rest>
  constexpr void print (const char * fmt, const First & first, const Rest & ... rest) {
    for (;;) {
      const char c = *fmt++;
      if (c == '\0') break;   // pro jistotu, zde patrně zbytečné
      if (c == '%' ) { console << first; print (fmt, rest ...); break; }
      else console << c;
    }
  }
};
static void printCoeficients () {
  console << "Computed coeficients:" << EOL;
  for (const auto & e: dcs) {   // Ukázka použití range based for
    fmt::print ("x = % : y = %, b = %, c = %, d = %\r\n", e.x, e.a, e.b, e.c, e.d);
  }
}
//! [VarArgExample]
/////////////////////////////////////////////////////////////////
int main () {
  LedBlinkInit();
  usart.Init  ();
//! [ConnectionStack]
  console += usart;                       // abstraktní zřetězení pomocí třídy BaseLayer
//! [ConnectionStack]
  console.outWithCR (Intro);              // máme unixové konce řádků, pro terminál musíme doplnit návrat vozíku ('\r')
  static constexpr int len = 100;
  static real mArray [len];               // nějaké pole, vytvoříme staticky, aby bylo vidět velikost
  for (int t=0; t<len; t+=1) {
    const real x (from_int (t));
    const real y = dcs.interpolate (x);   // vypočti interpolovanou hodnotu
    mArray [t] = y;                       // a ulož jí do toho pole
  }
  // celé pole vypíšeme na terminál
  console << SEPARATOR;
  for (int i=0; i<10; i++) {
    console << SEPARATOR << i;            // v prvním řádku jednotky
  }
  console << EOL;
  const int m = len / 10;
  for (int i=0; i<m; i++) {
    console << from_int(i * 10) << " : "; // následují desítky oddělené dvojtečkou
    for (int j=0; j<10; j++) {
      const int n = 10 * i + j;
      console << mArray [n] << " ";       // a jednotlivé interpolované hodnoty
    }
    console << EOL;
  }
  printCoeficients();
  LedBlinkTest();                         // tohle jen bliká ledkou do nekonečna
  return 0;
}
