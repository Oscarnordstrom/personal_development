#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

bool contains_upper_cases(const string &input_string) {
  for (auto character : input_string) {
    if (character == toupper(character)) {
      return true;
    }
  }
  return false;
}

void convert_to_lowerstring(string &input_string) {
  for (auto &character : input_string) {
    character = tolower(character);
  }
}

int main() {
  string test_string = "Hello, World!";
  cout << contains_upper_cases(test_string) << endl;
  cout << test_string << endl;
  convert_to_lowerstring(test_string);
  cout << test_string << endl;

  return 0;
}
