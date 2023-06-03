#include "Chapter6.h"
int fact(int val) {
  int ret = 1;
  for (int iter = 1; iter != val + 1; iter++) {
    ret *= iter;
  }

  return ret;
}