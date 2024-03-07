#include "modules/add_binary_integers.h"
#include "modules/insertion_sort.h"
#include "modules/linear_search.h"
#include "modules/print.h"
#include "modules/selection_sort.h"
#include <cstdint>
#include <iostream>
#include <iterator>
#include <limits>
#include <vector>

int main() {
  std::cout << "input vector 1: ";
  std::istream_iterator<uint64_t> begin(std::cin), end;
  std::vector<uint64_t> input(begin, end);

  selection_sort(input, true);
  print(input, std::cout);

  return 0;
}
