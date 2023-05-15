#include <iostream>
using std::cout;
using std::endl;

int main() {
  int i1;
  double d1;
  d1 = i1 = 3.5;
  cout << d1 << endl;
  cout << i1 << endl;

  int i2;
  double d2;
  i2 = d2 = 3.5;
  cout << d2 << endl;
  cout << i2 << endl;

  return 0;
}
