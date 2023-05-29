#include <iostream>
using std::cout;
using std::endl;

int get_size() { return -1; }

int main() {
  while (get_size() <= 0) {
    cout << "Inside loop" << endl;
  }

  return 0;
}
