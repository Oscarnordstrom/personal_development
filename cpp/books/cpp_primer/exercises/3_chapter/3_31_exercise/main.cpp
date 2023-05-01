#include <cstdlib>
#include <iostream>
int main() {
  constexpr std::size_t array_size = 10;
  int ia[array_size];
  for (std::size_t ix = 0; ix < array_size; ++ix)
    ia[ix] = ix;

  for (auto element : ia) {
    std::cout << element << std::endl;
  }
}