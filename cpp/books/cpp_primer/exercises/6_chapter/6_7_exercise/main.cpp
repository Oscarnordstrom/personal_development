#include <iostream>
using std::cout;
using std::endl;

int iterator() {
  static int ctr = 0;
  return ++ctr;
}

int main() {
  for (int i = 0; i < 10; ++i) {
    cout << iterator() << endl;
  }

  return 0;
}
