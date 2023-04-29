#include <iostream>
int main() {
  int a = 3, b = 4;

  decltype(a) c = a;   // c will have type int
  decltype((b)) d = a; // d will have type int&

  ++c; // c will have value 4
  ++d; // d will have value 4

  std::cout << c << std::endl;
  std::cout << d << std::endl;
}
