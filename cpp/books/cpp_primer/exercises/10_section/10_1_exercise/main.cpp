#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {
  std::vector<int> v = {1, 2, 3, 4, 3, 3, 7, 8, 9};
  cout << std::count(v.begin(), v.end(), 3) << std::endl;

  return 0;
}
