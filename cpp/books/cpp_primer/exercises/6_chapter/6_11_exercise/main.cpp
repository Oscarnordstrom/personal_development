#include <iostream>
using std::cout;
using std::endl;

void reset(int &val) { val = 0; }

int main() {
  int value = 1;

  cout << "Before reset: " << value << endl;
  reset(value);
  cout << "Before reset: " << value << endl;

  return 0;
}
