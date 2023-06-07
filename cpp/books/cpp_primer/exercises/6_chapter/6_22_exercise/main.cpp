#include <iostream>
using std::cout;
using std::endl;

void swap(int &integer1, int &integer2) {
  integer1 -= integer2;
  integer2 += integer1;
  integer1 = integer2 - integer1;
}

int main() {
  int val1 = 7;
  int val2 = -1;

  cout << val1 << " " << val2 << endl;

  swap(val1, val2);
  cout << val1 << " " << val2 << endl;

  return 0;
}
