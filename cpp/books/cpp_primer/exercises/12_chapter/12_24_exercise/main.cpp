#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main() {
  std::string input_str;
  cout << "Enter string input: ";
  cin >> input_str;

  size_t size_of_input = input_str.size();

  char *cp = new char[size_of_input];
  for (size_t i = 0; i < size_of_input; ++i) {
    cp[i] = input_str[i];
  }

  std::cout << "Contents of cp: ";
  for (size_t i = 0; i < size_of_input; ++i) {
    std::cout << cp[i];
  }
  std::cout << std::endl;

  delete[] cp;

  return 0;
}
