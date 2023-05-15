// It means that a value has gone over the limit of the primitive type holding
// it.
#include <iostream>
using std::cout;
using std::endl;

int main() {
  char val1 = 254;
  ++val1;

  signed char val2 = 127;
  val2++;

  int val3 = 30000;
  val3 = val3 * val3;
  return 0;
}
