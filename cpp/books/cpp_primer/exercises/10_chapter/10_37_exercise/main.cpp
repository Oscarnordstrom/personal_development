#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using std::cout;
using std::endl;

int main() {

  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> rlist(v.rbegin() + 2, v.rend() - 3);

  for (int &item : rlist) {
    cout << item << " ";
  }
  cout << endl;

  return 0;
}
