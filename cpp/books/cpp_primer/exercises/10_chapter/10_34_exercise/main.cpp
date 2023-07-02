#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {

  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::for_each(v.rbegin(), v.rend(),
                [](int element) { cout << element << " "; });
  cout << endl;
  return 0;
}
