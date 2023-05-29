#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int i1, i2;

  cout << "Input the first integer: ";
  cin >> i1;
  cout << endl;

begin:
  try {
    cout << "Input the second integer: ";
    cin >> i2;
    if (i2 == 0) {
      std::runtime_error error("Division by zero");
      throw error;
    }
  } catch (std::runtime_error) {
    cout << "Second integer cannot be 0, please try again." << endl;
    goto begin;
  }

  cout << endl;
  cout << "Division result: " << i1 / i2 << endl;

  return 0;
}
