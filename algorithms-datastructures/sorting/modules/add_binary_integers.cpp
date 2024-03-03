#include <cassert>
#include <cstdint>
#include <iostream>
#include <vector>

template <typename T>
std::vector<T> add_binary_integers(std::vector<T> &a, std::vector<T> &b) {
  assert(a.size() == b.size());
  std::vector<T> c(a.size() + 1, 0);
  T carry = 0;
  for (typename std::vector<T>::size_type i = 0; i < a.size(); i++) {
    c[i] = carry;
    if ((a[i] == 1) && b[i] == 1) {
      carry = 1;
    } else if ((a[i] == 1) || b[i] == 1) {
      c[i] = 1;
      carry = 0;
    } else {
      carry = 0;
    }
  }
  (c.back()) = carry;
  return c;
}
template std::vector<uint64_t>
add_binary_integers<uint64_t>(std::vector<uint64_t> &a,
                              std::vector<uint64_t> &b);