#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;

int main() {
  string input_string;
  char char_buffer;
  while (cin.get(char_buffer)) {
    input_string.push_back(char_buffer);
  }

  int a = 0, e = 0, i = 0, o = 0, u = 0, consonant = 0, blank_space = 0,
      new_line = 0, tab = 0, ff = 0, fl = 0, fi = 0;

  char iter_char;
  char current_char = ' ', latest_char = ' ';
  string joined_chars = {current_char, latest_char};
  for (auto &character : input_string) {
    iter_char = tolower(character);
    current_char = iter_char;
    joined_chars = {latest_char, current_char};
    cout << joined_chars << " " << (joined_chars == "fi") << endl;

    if (joined_chars == "ff") {
      ff++;
    } else if (joined_chars == "fl") {
      fl++;
    } else if (joined_chars == "fi") {
      fi++;
    }

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

    latest_char = character;
  }

  cout << "a: " << a << endl;
  cout << "e: " << e << endl;
  cout << "i: " << i << endl;
  cout << "o: " << o << endl;
  cout << "u: " << u << endl;
  cout << "consonant: " << consonant << endl;
  cout << "blank space: " << blank_space << endl;
  cout << "new line: " << new_line << endl;
  cout << "ff: " << ff << endl;
  cout << "fl: " << fl << endl;
  cout << "fi: " << fi << endl;
  cout << "tab: " << tab << endl;

  return 0;
}