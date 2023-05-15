#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> vec = {1, 2, 3};
  int *ptr = &vec[0];
  int ival = 5;

  cout << ptr << endl
       << *ptr++ << endl; // Checks that ptr is not a null pointer, checks the
                          // value of the pointer address and then increments.

  cout << (ival++ && ival)
       << endl; // Firstly ival is increased by one, then returned as copy. If
                // the original value is zero, second part of the expression is
                // evaluated. If the incremented value is non-zero,then entire
                // expression becomes true, false otherwise.

  cout << (vec[ival++] <= vec[ival])
       << endl; // Undefined behaviour, as the order of the expressions /
                // operators are not defined. vec[ival] might be evaluated
                // before vec[ival++] which changes the outcome.
  return 0;
}
