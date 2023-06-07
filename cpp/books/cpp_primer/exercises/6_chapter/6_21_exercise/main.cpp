#include <iostream>
using std::cout;
using std::endl;

int foo(int integer, int *intptr) {
  if (integer > *intptr) {
    return integer;
  } else if (integer < *intptr) {
    return *intptr;
  } else {
    return 0;
  }
}

int main() {
  int val1 = 7;
  int val2 = 9;

  int *val2ptr = &val2;
  cout << foo(val1, val2ptr) << endl;

  return 0;
}
