#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> vec = {1, 2, 3};

  int arr[3] = {0, 0, 0};
  for (int idx = 0; idx != 3; ++idx) {
    arr[idx] = vec[idx];
  }

  for (auto element : arr) {
    cout << element << endl;
  }

  return 0;
}
