#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  int array[4] = {0, 1, 2, 3};
  int array_2[4] = {0, 1, 2, 3};

  vector<int> vec = {0, 1, 2, 3};
  vector<int> vec_2 = {0, 1, 2, 3};

  // cout << (array == array_2) << endl; // Does not show equality. Only if
  // pointers contain same addresses.
  int idx = 0;
  bool is_same = true;
  while (idx != 5) {
    if (*(array + idx) != *(array_2 + idx)) {
      is_same = false;
    }
    ++idx;
  }
  cout << is_same << endl;

  cout << (vec == vec_2) << endl;
}