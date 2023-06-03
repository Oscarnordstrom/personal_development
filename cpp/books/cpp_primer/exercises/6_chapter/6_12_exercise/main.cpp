// Easier to use references. But for a simple task like this pointers were not
// complicated either.
#include <iostream>
using std::cout;
using std::endl;

void swap_values(int &v1, int &v2) {
  int intermediate_value;

  intermediate_value = v1;
  v1 = v2;
  v2 = intermediate_value;
}

int main() {
  int i1 = 5, i2 = 7;
  int &v1 = i1;
  int &v2 = i2;

  cout << "i1: " << i1 << endl << "i2: " << i2 << endl << endl;
  swap_values(v1, v2);
  cout << "i1: " << i1 << endl << "i2: " << i2 << endl;

  return 0;
}
