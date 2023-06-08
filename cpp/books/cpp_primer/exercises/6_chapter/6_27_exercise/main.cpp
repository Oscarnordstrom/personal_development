#include <iostream>
using std::cout;
using std::endl;

void sum_and_print(std::initializer_list<int> input_list) {
  int sum = 0;
  for (auto item : input_list) {
    sum += item;
  }
  cout << sum << endl;
}

int main() {
  sum_and_print({1, 2, 3, 4, 5});
  return 0;
}