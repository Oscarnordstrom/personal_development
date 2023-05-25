#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> v1 = {1, 2, 3, 4, 5, 6};
  vector<int> v2 = {1, 2, 3, 4, 5, 6};

  if (!(v1.size() > v2.size())) {
    cout << false << endl;
    return -1;
  }

  decltype(v1.size()) idx = 0;
  while (idx < v1.size() && idx < v2.size()) {
    if (v1[idx] != v2[idx]) {
      cout << false << endl;
      return -1;
    }

    ++idx;
  }

  cout << true << endl;
  return 0;
}
