// The code checks the pointer to the C-style char array
// and the first character. In this case this will be evaluated as true.

#include <iostream>
using std::cout;
using std::endl;

int main() {
  const char *cp = "Hello World";
  cout << (cp && *cp) << endl;
}
