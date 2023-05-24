#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string input_string;
  cin >> input_string;

  int a = 0, e = 0, i = 0, o = 0, u = 0, consonant = 0;
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
    } else {
      consonant++;
    }
  }

  cout << "a: " << a << " "
       << "e: " << e << " "
       << "i: " << i << " "
       << "o: " << o << " "
       << "u: " << u << " "
       << "consonant" << consonant << endl;

  return 0;
}