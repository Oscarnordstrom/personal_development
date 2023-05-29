#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<string> input_v;
  string input_str = "";
  string last_str = "";
  while (cin >> input_str) {
    if (last_str == input_str) {
      if (toupper(input_str[0]) == input_str[0]) {
        cout << "Duplicate found" << endl;
        break;
      } else {
        continue;
      }
    }

    input_v.push_back(input_str);
    last_str = input_str;
  }

  for (auto &element : input_v) {
    cout << element << " ";
  }
  cout << endl;

  return 0;
}
