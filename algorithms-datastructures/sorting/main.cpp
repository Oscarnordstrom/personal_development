#include "modules/insertion_sort.h"
#include "modules/print.h"
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::istream_iterator<long> begin(std::cin), end;
  std::vector<long> input(begin, end);

  insertion_sort(input, false);
  print(input, std::cout);

  return 0;
}
