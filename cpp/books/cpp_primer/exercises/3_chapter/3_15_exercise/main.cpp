#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string string_value;
  vector<string> int_vector;

  while (cin >> string_value) {
    int_vector.push_back(string_value);
  }

  for (auto value : int_vector) {
    cout << value << endl;
  }
}