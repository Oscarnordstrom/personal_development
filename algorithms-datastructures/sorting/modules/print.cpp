#include <iostream>
#include <vector>

template <typename T> void print(const std::vector<T> &v, std::ostream &out) {
  for (const T &item : v) {
    out << item << " ";
  }
  out << "\n";
}
template void print<long>(const std::vector<long> &, std::ostream &);
