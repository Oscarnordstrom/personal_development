#include "./print.h"
#include <vector>

template <typename T>
typename std::vector<T>::size_type *linear_search(std::vector<T> &v, T val) {
  for (typename std::vector<T>::size_type i = 0; i < v.size(); i++) {
    if (v[i] == val) {
      return new typename std::vector<T>::size_type(i);
    }
  }
  return nullptr;
}

template std::vector<uint64_t>::size_type *
linear_search<uint64_t>(std::vector<uint64_t> &, uint64_t);
