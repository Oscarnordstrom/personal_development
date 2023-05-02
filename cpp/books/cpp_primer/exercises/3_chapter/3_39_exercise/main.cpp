#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main() {
  string str_1 = "test";
  string str_2 = "tett";
  cout << (str_1 == str_2) << endl;

  char c_1[] = {'t', 'e', 's', 't'};
  char c_2[] = {'t', 'e', 't', 't'};

  int idx = 0;
  bool is_same = true;
  while (idx != 3) {
    if (*(c_1 + idx) != *(c_2 + idx)) {
      is_same = false;
    }
    ++idx;
  }
  cout << is_same << endl;

  return 0;
}
