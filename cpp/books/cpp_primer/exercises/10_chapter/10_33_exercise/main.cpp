#include <algorithm>
#include <fstream>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  std::ifstream input_data("10.32.in");
  std::istream_iterator<int> integers(input_data), eof;

  std::ofstream output_odds("odds.out");
  std::ofstream output_evens("evens.out");

  std::ostream_iterator<int> odd_iter(output_odds, " "),
      even_iter(output_evens, " ");
  std::for_each(integers, eof,
                [&](int i) { i % 2 ? odd_iter = i : even_iter = i; });

  return 0;
}
