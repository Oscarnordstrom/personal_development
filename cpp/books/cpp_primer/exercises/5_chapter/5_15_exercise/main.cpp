#include <iostream>
using std::cout;
using std::endl;

int main() {
  // (a)
  // ix is defined inside for header, which goes out of scope after for loop is
  // done sz is not initialized.
  int sz = 5;
  int ix = 0;
  for (; ix != sz; ++ix) {
  }
  if (ix != sz) {
  }

  // (b)
  // missing initializing part. ix1 is not declared so could be any value
  int ix1 = 0;
  int sz1 = 5;
  for (; ix1 != sz1; ++ix1) {
  }

  // (c)
  // ix and sz will never reach each other because both are incremented before
  // checking if they're equal.
  // For this loop to work sz has to be even or else they will go past each
  // other.
  for (int ix = 0, sz = 6; ix != sz; ++ix, --sz) {
  }

  return 0;
}
