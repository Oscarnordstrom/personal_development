#include <cstdint>
#include <iostream>
#include <vector>

template <typename T> void print(const std::vector<T> &v, std::ostream &out) {
  for (const T &item : v) {
    out << item << " ";
  }
  out << "\n";
}
template void print<uint64_t>(const std::vector<uint64_t> &, std::ostream &);
