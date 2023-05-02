#include <iostream>
using std::cout;
using std::endl;

int main() {
  constexpr int size_of_array = 5;
  int array[size_of_array] = {1, 2, 3, 4, 5};

  for (auto element : array) {
    cout << element << endl;
  }

  int *ptr = array;

  while (ptr != std::end(array)) {
    *ptr = 0;
    ++ptr;
  }

  for (auto element : array) {
    cout << element << endl;
  }
}