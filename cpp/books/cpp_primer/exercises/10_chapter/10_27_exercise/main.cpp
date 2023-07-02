#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {
  std::vector<int> v = {3, 2, 4, 1, 3, 3, 3, 5, 7};
  std::sort(v.begin(), v.end());

  std::vector<int> dest_v;
  std::unique_copy(v.begin(), v.end(), std::back_inserter(dest_v));

  for (int &item : dest_v) {
    cout << item << " ";
  }
  cout << endl;

  return 0;
}
