// pi is a pointer type, which cannot be assigned address 0.
// Changed by setting an `*` to the value.

#include <iostream>
using std::cout;
using std::endl;

int main() {
  double dval;
  int ival;
  int *pi;
  dval = ival = *pi = 0;
  return 0;
}
