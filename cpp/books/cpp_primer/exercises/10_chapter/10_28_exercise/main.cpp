#include <algorithm>
#include <deque>
#include <iostream>
using std::cout;
using std::endl;

void print(std::deque<int> &output_v) {
  for (int &item : output_v) {
    cout << item << " ";
  }
  cout << endl;
}

int main() {
  std::deque<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::deque<int> dest1, dest2, dest3;

  std::unique_copy(v.begin(), v.end(), std::back_inserter(dest1));
  std::unique_copy(v.begin(), v.end(), std::front_inserter(dest2));
  std::unique_copy(v.begin(), v.end(), std::inserter(dest3, dest3.begin()));

  print(dest1);
  print(dest2);
  print(dest3);

  return 0;
}
