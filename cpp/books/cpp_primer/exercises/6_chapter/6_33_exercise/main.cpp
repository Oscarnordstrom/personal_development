#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

void recursive_print(vector<int>::iterator value,
                     vector<int>::iterator stopping_criterion) {

  if (value == stopping_criterion) {
    return;
  }
  cout << *value << endl;

  recursive_print(++value, stopping_criterion);
}

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};
  auto v_stop = v.end();
  auto v_start = v.begin();

  recursive_print(v_start, v_stop);

  return 0;
}
