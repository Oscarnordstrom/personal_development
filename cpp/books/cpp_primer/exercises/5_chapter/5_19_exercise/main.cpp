#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string str1, str2;

  do {
    cout << "Input string nr 1: ";
    cin >> str1;
    cout << "Input string nr 2: ";
    cin >> str2;

    if (str1.size() < str2.size()) {
      cout << "Second string is larger than the first." << endl;
    } else if (str2.size() < str1.size()) {
      cout << "First string is larger than the second." << endl;
    } else if (str1.size() == str2.size()) {
      cout << "Both strings are the same length" << endl;
    }

  } while (cin);

  return 0;
}
