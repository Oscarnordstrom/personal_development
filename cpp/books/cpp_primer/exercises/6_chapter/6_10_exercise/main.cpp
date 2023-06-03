#include <iostream>
using std::cout;
using std::endl;

void swap_values(int *p1, int *p2) {
  int intermediate_value;

  intermediate_value = *p1;
  *p1 = *p2;
  *p2 = intermediate_value;
}

int main() {
  int i1 = 5, i2 = 7;
  int *p1 = &i1;
  int *p2 = &i2;

  cout << "i1: " << i1 << endl << "i2: " << i2 << endl << endl;
  swap_values(p1, p2);
  cout << "i1: " << i1 << endl << "i2: " << i2 << endl;

  return 0;
}
