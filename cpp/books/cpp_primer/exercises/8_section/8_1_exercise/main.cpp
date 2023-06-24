#include <iostream>
#include <string>
using std::cout;
using std::endl;

std::istream &reader(std::istream &is, std::string &reader_str) {
  std::string input_string;
  while (is >> input_string) {
    reader_str.append(input_string);
    reader_str.push_back(' ');
  }
  is.clear();
  return is;
}

int main() {
return 0;
}
