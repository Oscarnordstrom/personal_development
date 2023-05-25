// I would use a for loop as it has more functionality than a while loop.
#include <iostream>
#include <limits>
using std::cin;
using std::cout;
using std::endl;

int main() {
  // part one
  int integer;
  while (cin >> integer) {
    cout << integer * integer << endl;
  }

  for (int integer = 0; integer != 10; ++integer) {
    cout << integer * integer << endl;
  }

  // part two
  int integer2 = 0;
  while (integer2 != 10) {
    cout << integer2 * integer2 << endl;
    ++integer2;
  }

  cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  for (int integer3 = 0; cin >> integer3; cout << integer3 * integer3 << endl) {
  }
  return 0;
}
