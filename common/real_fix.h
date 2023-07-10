#ifndef _REAL_FIX_H
#define _REAL_FIX_H
#include <stdint.h>
//! @file
static constexpr int     SHIFT  = 16;
static constexpr double  LSHIFT = static_cast<double>(1ul << SHIFT);
static constexpr double  RSHIFT = 1.0 / LSHIFT;
static constexpr int64_t INT48MAX = (1ll << 48) - 1ll;
static constexpr int64_t INT48MIN = - INT48MAX;

static inline void Overflow () {
  // a tady mi ta Ariane 5 taky vybuchne
}

/**
 * @class real
 * @brief Aritmetika v pevné řádové čárce (16b.16b).
 * 
 * Není to moc přesné, ale bez float koprocesoru to postačí.
 * A není to kompletní, jen pro výpočet polynomu, zde to stačí.
 * Funkce to_str() na konci převádí real na lidsky čitelný řetězec.
 */
struct real {
  int x;    // necháme veřejné
  /**
   * @brief Konstruktor z double
   * @param _x double
   */
  explicit constexpr real (const double _x) : x (static_cast<int>(LSHIFT * _x)) {}
  /**
   * @brief Konstruktor z celého čísla, přímo nepoužívat - explicitní převod from_int()
   * Ono se to trochu pere s tím double.
   * @param _x integer
   */
  explicit constexpr real (const int    _x) : x (_x) {}
  /**
   * @brief Kopírovací konstruktor
   */
  explicit constexpr real () : x (0) {}
  // stačí přetížit jen některé operátory, výpočet je dělán poměrně úsporně
  real operator+ (const real & r) const {
    return real (x + r.x);
  }
  real operator- (const real & r) const {
    return real (x - r.x);
  }
  bool operator< (const real & r) const {
    return x < r.x;
  }
  bool operator>= (const real & r) const {
    return x >= r.x;
  }
  real operator* (const real & r) const {
    const int64_t res = (int64_t)(x) * (int64_t)(r.x);
    // Přeteče to nejspíš tady, součet není tak kritický ale i to by se mělo ošetřit.
    if ((res > INT48MAX) or (res < INT48MIN)) Overflow ();
    // Násobení musí udělat posun doprava aby to sedělo.
    return real ((int) (res >> SHIFT));
  }
};
//! Vytvoří správný real z celého čísla
static inline real from_int (const int n) {
  return real (n << SHIFT);
}
//! Vytvoří double z real
static inline double from_real (const real & r) {
  return RSHIFT * double(r.x);
}
#if 1
static const char * dec = "0123456789";
static int str_r (char * str, unsigned & h, const int n = 0) {
  if (n == 5) return n;
  const int k = str_r (str, h, n + 1);
  str[n] = h ? dec [h % 10] : ' ';
  h /= 10;
  return k;
}
static inline int to_str (const real & r, char * str, const int dp = 3) {
  constexpr unsigned MASK = (1u << SHIFT) - 1u;
  int  p = r.x, n = 0;
  bool s = false;
  if (p < 0) {
    p = -p;
    s = true;
  }
  str [n++] = s ? '-' : ' ';
  unsigned h = p >> SHIFT, l = p & MASK;
  n += str_r (str + n, h);
  str [n++] = '.';
  for (int i=0; i<dp; i++) {
    l *= 10;
    str [n++] = dec [l >> SHIFT];
    l &= MASK;
  }
  str [n++] = '\0';
  return n;
}
#endif // 1
#endif //  _REAL_FIX_H
