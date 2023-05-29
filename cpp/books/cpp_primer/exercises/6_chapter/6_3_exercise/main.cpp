#include <iostream>
using std::cout;
using std::endl;

int fact(int val) {
  int ret = 1;
  for (int iter = 1; iter != val + 1; iter++) {
    ret *= iter;
  }

  return ret;
}

int main() {
  cout << fact(5) << endl;
  return 0;
}
