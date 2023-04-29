#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string iter_string, acc_string;
  int idx = 1;
  cout << "reading string: " << idx << endl;
  while (getline(cin, iter_string)) { // (cin >> iter_string) to separate by whitespace
    idx += 1;
    cout << "reading string: " << idx << endl;
    acc_string += iter_string;
  }

  cout << "final string:" << acc_string << endl;
}