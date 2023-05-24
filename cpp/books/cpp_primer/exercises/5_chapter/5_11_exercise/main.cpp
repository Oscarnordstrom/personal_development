#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getc;
using std::getline;
using std::string;

int main() {
  string input_string;
  char char_buffer;
  while (cin.get(char_buffer)) {
    input_string.push_back(char_buffer);
  }

  int a = 0, e = 0, i = 0, o = 0, u = 0, consonant = 0, blank_space = 0,
      new_line = 0, tab = 0;
  char iter_char;
  for (auto &character : input_string) {
    iter_char = tolower(character);
    if (iter_char == 'a') {
      a++;
    } else if (iter_char == 'e') {
      e++;
    } else if (iter_char == 'i') {
      i++;
    } else if (iter_char == 'o') {
      o++;
    } else if (iter_char == 'u') {
      u++;
    } else if (iter_char == ' ') {
      blank_space++;
    } else if (iter_char == '\n') {
      new_line++;
    } else if (iter_char == '\t') {
      tab++;
    } else {
      consonant++;
    }
  }

  cout << "a: " << a << " "
       << "e: " << e << " "
       << "i: " << i << " "
       << "o: " << o << " "
       << "u: " << u << " "
       << "consonant: " << consonant << " "
       << "blank space: " << blank_space << " "
       << "new line: " << new_line << " "
       << "tab: " << tab << endl;

  return 0;
}