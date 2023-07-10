#include "print.h"

#if __arm__
static inline void sleep (void) {
  asm volatile ("wfi");
}
#else
// unix - unused
#define sleep()
#endif

static const char*    hexStr   = "0123456789ABCDEF";
static const uint16_t numLen[] = {1, 32, 1, 11, 8, 0};

Print::Print (PrintBases b) noexcept : BaseLayer () {
  base = b;
}
//![BlockExample]
// Výstup blokujeme podle toho, co se vrací ze spodní vrstvy
uint32_t Print::BlockDown (const char* buf, uint32_t len) {
  uint32_t n, ofs = 0, req = len;
  for (;;) {
    // spodní vrstva může vrátit i nulu, pokud je FIFO plné
    n = BaseLayer::Down (buf + ofs, req);
    ofs += n;   // Posuneme ukazatel
    req -= n;   // Zmenšíme další požadavek
    if (!req) break;
    sleep();    // A klidně můžeme spát
  }
  return ofs;
}
//![BlockExample]

Print& Print::operator<< (const char * str) {
  uint32_t i = 0;
  while (str[i++]);             // strlen
  BlockDown (str, --i);
  return *this;
}

Print& Print::operator<< (const int num) {
  uint32_t i = BUFLEN;
  
  if (base == DEC) {
    unsigned int  u;
    if (num < 0) u = -num;
    else         u =  num;
    do {
      // Přímočaré a funkční řešení 
      uint32_t rem;
      rem = u % (unsigned) DEC;        // 1.dělení
      u   = u / (unsigned) DEC;        // 2.dělení, překladač si to nějak sloučí
      buf [--i] = hexStr [rem];
    } while (u);
    if (num < 0) buf [--i] = '-';
  } else {
    uint32_t m = (1U << (uint32_t) base) - 1U;
    uint32_t l = (uint32_t) numLen [(int) base];
    uint32_t u = (uint32_t) num;
    for (unsigned n=0; n<l; n++) {
      buf [--i] = hexStr [u & m];
      u >>= (unsigned) base;
    }
    if (base == BIN) buf [--i] = 'b';
    if (base == HEX) buf [--i] = 'x';
    buf [--i] = '0';
  }
  BlockDown (buf+i, BUFLEN-i);
  return *this;
}
Print & Print::operator<< (const real & num) {
  unsigned r = to_str (num, buf);     // řešeno v numerice typu real
  BlockDown (buf, r);
  return *this;
}

Print& Print::operator<< (const PrintBases num) {
  base = num;
  return *this;
}
Print & Print::operator<< (const char c) {
  BlockDown(&c, 1);
  return *this;
}

void Print::out (const void* p, uint32_t l) {
  const unsigned char* q = (const unsigned char*) p;
  unsigned char uc;
  uint32_t      k, n = 0;
  for (uint32_t i=0; i<l; i++) {
    uc = q[i];
    buf[n++] = '<';
    k = uc >> 4;
    buf[n++] = hexStr [k];
    k = uc  & 0x0f;
    buf[n++] = hexStr [k];
    buf[n++] = '>';
  }
  buf[n++] = '\r';
  buf[n++] = '\n';
  BlockDown (buf, n);
}
void Print::outWithCR(const char * str) {
  const char CR = '\r';
  for (int n=0;;n++) {
    const char c = str[n];
    if (c == '\0') break;
    BlockDown (&c, 1);
    if (c == '\n') BlockDown(&CR, 1);
  }
}
