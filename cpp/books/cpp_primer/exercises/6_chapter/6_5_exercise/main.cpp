#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int abs(int val) {
  if (val < 0) {
    return val * -1;
  } else {
    return val;
  }
}

int main() {
  cout << "Input an integer to calculate its absolut value: ";
  int input;
  cin >> input;
  cout << "Factorial: " << abs(input) << endl;
  return 0;
}
