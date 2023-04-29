#include <iostream>

int main() {
  int value_1 = 1;
  int *ptr_value_1 = &value_1;

  std::cout << value_1 << std::endl;
  *ptr_value_1 = 2;
  std::cout << value_1 << std::endl;

  std::cout << ptr_value_1 << std::endl;
  ptr_value_1 += 1;
  std::cout << ptr_value_1 << std::endl;
  std::cout << *ptr_value_1 << std::endl;
}