#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto &element : v) {
    element = (element % 2 == 0) ? element : element * element;
  }

  for (auto &element : v) {
    cout << element << endl;
  }
  return 0;
}
