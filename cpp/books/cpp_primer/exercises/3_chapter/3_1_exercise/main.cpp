// Only doing exercise 1.11
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int n1, n2;
  std::cin >> n1 >> n2;
  while (n1 < n2) {
    ++n1;
    cout << n1 << endl;
  }
}