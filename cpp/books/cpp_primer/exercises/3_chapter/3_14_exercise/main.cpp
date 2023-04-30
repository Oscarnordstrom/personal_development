#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  int integer_value;
  vector<int> int_vector;

  while (cin >> integer_value) {
    int_vector.push_back(integer_value);
  }

  for (int value : int_vector) {
    cout << value << endl;
  }
}