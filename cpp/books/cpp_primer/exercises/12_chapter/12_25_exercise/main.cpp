#include <iostream>
using std::cout;
using std::endl;

int main() {
  int *pa = new int[10];

  delete[] pa;
  return 0;
}
