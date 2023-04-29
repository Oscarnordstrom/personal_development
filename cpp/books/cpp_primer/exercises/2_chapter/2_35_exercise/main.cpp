#include <iostream>
int main() {
  const int i = 42;

  auto j = i; // j: const int and copy the value of 42 into j.

  const auto &k = i; // k: const int. It will be an alias for i.

  auto *p = &i; // int pointer with low level const int.

  const auto j2 = i, &k2 = i; // j2 const int and copy value from i.
  // k2 will be a const int, alias for i.

  std::cout << i << std::endl;
  std::cout << j << std::endl;
  std::cout << k << std::endl;
  std::cout << p << std::endl;
  std::cout << j2 << std::endl;
  std::cout << k2 << std::endl;
}
