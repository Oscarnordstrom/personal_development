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
  for (auto character : input_string) {
    if (character == 'a') {
      a++;
    } else if (character == 'e') {
      e++;
    } else if (character == 'i') {
      i++;
    } else if (character == 'o') {
      o++;
    } else if (character == 'u') {
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
