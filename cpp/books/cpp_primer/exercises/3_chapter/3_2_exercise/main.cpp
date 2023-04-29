#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main() {
  string input, line, word;
  //  while (getline(cin, line)) { One line at a time
  //    cout << line << endl;
  //  }

  while (cin >> word) {
    cout << word << endl;
  }
}