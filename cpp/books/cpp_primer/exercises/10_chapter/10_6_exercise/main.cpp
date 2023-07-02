#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {

  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (int item : v) {
    cout << item << " ";
  }
  cout << std::endl;

  std::fill_n(v.begin(), v.size(), 0);

  for (int item : v) {
    cout << item << " ";
  }
  cout << std::endl;

  return 0;
}
