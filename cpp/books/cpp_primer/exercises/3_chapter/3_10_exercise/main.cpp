#include <iostream>
#include <string>

int main() {
  std::string test_string = "literal. definiton!";

  std::string output_string;
  for (char &c : test_string) {
    if (!ispunct(c)) {
      output_string += c;
    }
  }

  std::cout << output_string << std::endl;
}