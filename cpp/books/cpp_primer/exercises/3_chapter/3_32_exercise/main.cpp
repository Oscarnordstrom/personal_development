#include <cstdlib>
#include <iostream>
#include <vector>
int main() {
  constexpr std::size_t array_size = 10;
  int ia[array_size];
  for (std::size_t ix = 0; ix < array_size; ++ix)
    ia[ix] = ix;

  for (auto element : ia) {
    std::cout << element << std::endl;
  }

  int ia2[array_size];
  for (std::size_t ix = 0; ix < array_size; ++ix)
    ia2[ix] = ia[ix];

  for (auto element : ia2) {
    std::cout << element << std::endl;
  }

  std::vector<int> iv;
  for (auto i = 0; i < array_size; ++i)
    iv.push_back(i);

  std::vector<int> iv2(iv);

  for (auto element : iv) {
    std::cout << element << std::endl;
  }
}