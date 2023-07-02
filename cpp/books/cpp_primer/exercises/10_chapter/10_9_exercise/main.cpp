#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {
  std::vector<int> v = {1, 2, 3, 3, 3, 3, 4, 5};
  std::vector<int>::iterator uniqe_end = std::unique(v.begin(), v.end());

  v.erase(uniqe_end, v.end());

  for (int item : v) {
    cout << item << " ";
  }
  cout << endl;

  return 0;
}
