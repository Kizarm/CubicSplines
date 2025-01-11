#include <stdint.h>
#include <stdarg.h>
typedef __SIZE_TYPE__ size_t;
size_t strlen (const char *s) {
  size_t l = 0;
  while (*s++) l++;
  return l;
}
void *memcpy (void *dest, const void *src, size_t n) {
  const char *s = (const char *) src;
  char *d = (char *) dest;
  int i;
  for (i=0; i<n; i++) d[i] = s[i];
  return dest;
}
void *memset (void *s, int c, size_t n) {
  char *p = (char *) s;
  int i;
  for (i=0; i<n; i++) p[i] = c;
  return s;
}
