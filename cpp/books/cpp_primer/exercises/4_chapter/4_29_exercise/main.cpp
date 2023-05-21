#include <iostream>
using std::cout;
using std::endl;

int main() {
  int x[10];
  int *p = x;
  cout << sizeof(x) / sizeof(*x)
       << endl; // Calculates the number of elements in the array.
  cout << sizeof(p) / sizeof(*p)
       << endl; // Calculates the size of the pointer and divides by the size of
                // the first index. Which is not expected.
  return 0;
}
