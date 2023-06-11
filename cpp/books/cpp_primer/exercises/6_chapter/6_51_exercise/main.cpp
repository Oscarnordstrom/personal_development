#include <iostream>
using std::cout;
using std::endl;

void f() { cout << 1 << endl; }

void f(int value) { cout << value << endl; }
void f(int value1, int value2) { cout << value1 * value2 << endl; }
void f(double value1, double value2 = 3.14) { cout << value1 * value2 << endl; }

int main() {

  f();
  f(5);
  f(7.0);
  f(5, 5);
  f(6.0, 6.0);

  return 0;
}
