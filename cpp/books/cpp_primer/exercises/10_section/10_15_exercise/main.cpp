#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {

  std::vector<int> v = {1, 2, 3, 4, 5, 6};
  int addition_number = 5;

  auto two_sum = [addition_number](int &iter_value) {
    iter_value += addition_number;
    return;
  };

  for (int &item : v) {
    cout << item << " ";
  }
  cout << endl;

  std::for_each(v.begin(), v.end(), two_sum);

  for (int &item : v) {
    cout << item << " ";
  }
  cout << endl;

  return 0;
}
