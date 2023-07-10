#ifndef _REAL_FLT_H
#define _REAL_FLT_H

//! @brief Aritmetika v pohyblivé řádové čárce je poskytována přímo překladačem.

typedef float real;

static inline real from_int (const int n) {
  return real(n);
}
static inline double from_real (const real & r) {
  return double(r);
}
#if 1
/* Reprezentace float podle IEEE 754 v little endien */
typedef union {
  float f;
  struct {
    uint32_t frac : 23;
    uint32_t exp  : 8;
    uint32_t sign : 1;
  } u;
} float_unsigned;
typedef union {
  uint32_t u;
  struct {
    uint32_t l : 28;
    uint32_t h :  4;
  } e;
} u2m;
// výstupní znaky
static const char * dec = "0123456789";
// decimální exponent e do bufferu buff
static size_t exp_str (char * buf, const int e) {
  size_t n = 0;
  int exp = 0, res;
  buf [n++] = 'E';
  if (e > 0) {
    buf [n++] = '+';
    exp = e;
  } else if (e < 0) {
    buf [n++] = '-';
    exp = -e;
  } else {
    buf [n++] = '+';
    buf [n++] = '0';
    buf [n++] = '0';
    return n;
  }
  n += 2;
  res = exp % 10;
  buf [n - 1] = dec [res];
  exp = exp / 10;
  res = exp % 10;
  buf [n - 2] = dec [res];
  return n;
}
// konstanty pro decimální normalizaci
static const float exp_plus [] = {
  1.0e+1f, 1.0e+2f, 1.0e+4f, 1.0e+8f, 1.0e+16f, 1.0e+32f, 
};
static const float exp_minus [] = {
  1.0e-1f, 1.0e-2f, 1.0e-4f, 1.0e-8f, 1.0e-16f, 1.0e-32f, 
};
// decimální normalizace f do rozsahu <0.1, 1.0)
static float f_norm (const float f, int * pe) {
  float_unsigned res;
  res.f = f;
  uint32_t s = res.u.sign;  // schovej znaménko
  res.u.sign = 0u;          // dál už počítej jen s absolutní hodnotou
  unsigned n = 5u;
  if (res.f >= 1.0f) {
    do {
      if (res.f >= exp_plus [n]) {
        res.f *= exp_minus [n];
        * pe += 1 << n;
      }
    } while (n--);
    res.f *= 0.1f;
    * pe += 1;
  } else {
    do {
      if (res.f < exp_minus [n]) {
        res.f *= exp_plus [n];
        * pe -= 1 << n;
      }
    } while (n--);
  }
  res.u.sign = s;           // obnov znaménko
  // printf("normalized = %f, decimal exponent = %d\n", res.f, * pe);
  return res.f;
}
static inline size_t to_str (const real f, char * buf) {
  int dec_exp = 0;
  float_unsigned fu;
  fu.f = f_norm (f, & dec_exp);
  u2m um;
  // převod formátu pro výstup číslic pomocí celočíselného násobení 10
  um.u = (fu.u.frac | (1u << 23)) << (fu.u.exp - 122u);
  size_t n = 0;
  if (fu.u.sign) buf [n++] = '-';
  else           buf [n++] = '+';
  if (fu.f != 0.0f) {
    for (;;) {              // exportuj decimální číslice
      um.u *= 10u;
      const char c = dec [um.e.h];
      um.e.h = 0u;
      if (n == 2) buf [n++] = '.';
      buf [n++] = c;
      if  (n >= 10) break;  // 8 platnych cislic
    }
    n += exp_str (buf + n, dec_exp - 1);
  } else {                  // 0.0f
    buf [n++] = '0';
    for (unsigned i=0; i<12; i++) buf[n++] = ' ';
  }
  buf [n] = '\0';           // ukončení
  return n;
}
#endif // 1
#endif //  _REAL_FLT_H

