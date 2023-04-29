// Nothing happens because c is a copied value, which is never saved.
#include <iostream>
#include <string>

int main() {
  std::string input_string;
  std::cout << "Input string: " << std::endl;
  std::cin >> input_string;

  std::cout << "string before change: " << input_string << std::endl;
  for (char c : input_string) {
    c = 'X';
  }
  std::cout << "string after change: " << input_string << std::endl;
}