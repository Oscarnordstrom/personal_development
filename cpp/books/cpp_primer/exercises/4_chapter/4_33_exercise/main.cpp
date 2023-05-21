// the comma operator is left associativity. Therefore --y will be evaluated
// after the ? operator
// (++x, ++y) are evaluated together as they are between the ? and :

#include <iostream>
using std::cout;
using std::endl;

int main() {
  bool someValue = 0;
  int x = 0, y = 0;

  someValue ? ++x, ++y : --x, --y;
  (someValue ? (++x, ++y) : --x), --y;
  return 0;
}
