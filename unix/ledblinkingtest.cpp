#include <iostream>
#include "ledblinkingtest.h"

using namespace std;
//! [AbstactInterfaceExample]
struct AbstactInterface {
  virtual bool Send (const char * data, const int len) = 0;
};
//! [AbstactInterfaceExample]

void LedBlinkInit () {
  cout << __FUNCTION__ << endl;
}
void LedBlinkTest () {
  cout << __FUNCTION__ << endl;
}
