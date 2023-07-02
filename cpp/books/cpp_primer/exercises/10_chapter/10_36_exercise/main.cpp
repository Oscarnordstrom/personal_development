#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {

  std::vector<int> v = {1, 2, 3, 0, 5, 6, 0, 8, 9};
  auto last_0 = std::find(v.rbegin(), v.rend(), 0);

  cout << (*(v.begin() + 3) == *last_0) << endl;

  return 0;
}
