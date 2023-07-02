#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {

  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int>::iterator v_end = v.end() - 1;

  while (v_end > v.begin() - 1) {
    cout << *v_end-- << " ";
  }
  cout << endl;

  return 0;
}
