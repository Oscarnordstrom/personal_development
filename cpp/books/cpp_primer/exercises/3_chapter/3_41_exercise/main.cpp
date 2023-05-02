#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
  int arr[3] = {0, 1, 2};

  vector<int> vec(std::begin(arr), std::end(arr));
  for (auto element : vec) {
    cout << element << endl;
  }

  return 0;
}
