// This program iterates through the elements of ia, ix counts the index and ptr
// is a pointer to each value.

#include <iostream>
using std::cout;
using std::endl;

int main() {
  constexpr int size = 5;
  int ia[size] = {1, 2, 3, 4, 5};
  for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr) {

    cout << ix << " " << ptr << " " << *ptr << endl;
  }
  return 0;
}
