#include <iostream>
using std::cin;
using std::cout;
using std::endl;

long long int fact(int val) {
  long long int ret = 1;
  for (int iter = 1; iter != val + 1; iter++) {
    ret *= iter;
  }

  return ret;
}

int main() {
  cout << "Input an integer to calculate its factorial: ";
  long long int input;
  cin >> input;
  cout << "Factorial: " << fact(input) << endl;
  return 0;
}
