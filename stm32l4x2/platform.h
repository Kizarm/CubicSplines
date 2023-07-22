#ifndef PLATFORM_H
#define PLATFORM_H

static inline void sleep (void) {
  asm volatile ("wfi");
}

#endif // PLATFORM_H
