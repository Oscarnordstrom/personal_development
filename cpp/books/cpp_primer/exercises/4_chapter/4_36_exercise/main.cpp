#include <iostream>
using std::cout;
using std::endl;

int main() {
  int i = 2;
  double d = 1.6;

  cout << i << endl;

  i *= static_cast<int>(d);

  cout << i << endl;
  return 0;
}
