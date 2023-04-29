#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main() {
  std::string str_1, str_2;

  cout << "Please enter first string: ";
  cin >> str_1;
  cout << endl;

  cout << "Please enter second string: ";
  cin >> str_2;
  cout << endl;
  cout << "Checking if the strings are equal." << endl;
  if (str_1 != str_2) {
    cout << "Strings are not equal" << endl;
    if (str_1 > str_2) {
      cout << "first string is larger" << endl;
    } else {
      cout << "second string is larger" << endl;
    }
  } else {
    cout << "strings are equal" << endl;
  }

  cout << "Checking if the strings have equal lengths." << endl;
  if (str_1.size() != str_2.size()) {
    if (str_1.size() > str_2.size()) {
      cout << "first string is larger" << endl;
    } else {
      cout << "second string is larger" << endl;
    }
  } else {
    cout << "strings are equal length" << endl;
  }
}