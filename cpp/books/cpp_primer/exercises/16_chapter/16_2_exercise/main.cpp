#include <iostream>
using std::cout;
using std::endl;

template <typename T> int compare(T const &input_one, T const &input_two) {

  if (input_one < input_two)
    return -1;
  if (input_two < input_one)
    return 1;

  return 0;
};

int main() {

  std::cout << compare(6.1, 7.1) << std::endl;
  std::cout << compare(8.1, 7.1) << std::endl;
  std::cout << compare(7.1, 7.1) << std::endl;

  return 0;
}
