#include "modules/add_binary_integers.h"
#include "modules/insertion_sort.h"
#include "modules/linear_search.h"
#include "modules/print.h"
#include <cstdint>
#include <iostream>
#include <iterator>
#include <limits>
#include <vector>

int main() {
  std::cout << "input vector 1: ";
  std::istream_iterator<uint64_t> begin_a(std::cin), end_a;
  std::vector<uint64_t> input_a(begin_a, end_a);

  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::cout << "input vector 2: ";
  std::istream_iterator<uint64_t> begin_b(std::cin), end_b;
  std::vector<uint64_t> input_b(begin_b, end_b);

  std::vector<uint64_t> c = add_binary_integers(input_a, input_b);
  print(c, std::cout);

  return 0;
}
