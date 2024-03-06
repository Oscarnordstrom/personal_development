#include "./print.h"
#include <cstdint>
#include <iostream>
#include <memory>
#include <vector>

template <typename T>
std::vector<T>::iterator
_linear_search_le(typename std::vector<T>::iterator beg, typename std::vector<T>::iterator end, T val) {
  while (beg != end) {
    if (*beg > val) {
      return beg;
    }
    beg++;
  }
  return end;
}

template <typename T> void _selection_sort_decreasing(std::vector<T> &v) {
  if (v.size() < 2) {
    return;
  }

  for (typename std::vector<T>::iterator it = v.begin(); it != v.end(); ++it) {
    typename std::vector<T>::iterator cmp =
        _linear_search_le(it + 1, v.end(), *it);
    if (cmp != v.end()) {
      std::swap(*cmp, *it);
    }
  }
}

template <typename T>
std::vector<T>::iterator
_linear_search_ge(typename std::vector<T>::iterator beg,
                  typename std::vector<T>::iterator end, T val) {
  while (beg != end) {
    if (*beg < val) {
      return beg;
    }
    beg++;
  }
  return end;
}

template <typename T> void _selection_sort_increasing(std::vector<T> &v) {
  if (v.size() < 2) {
    return;
  }

  for (typename std::vector<T>::iterator it = v.begin(); it != v.end(); ++it) {
    typename std::vector<T>::iterator cmp =
        _linear_search_ge(it + 1, v.end(), *it);
    if (cmp != v.end()) {
      std::swap(*cmp, *it);
    }
  }
}


template <typename T> void selection_sort(std::vector<T> &v, bool decreasing) {
  if (decreasing) {
    _selection_sort_decreasing(v);
  } else {
    _selection_sort_increasing(v);
  }
}

template void selection_sort<uint64_t>(std::vector<uint64_t> &v, bool);
template std::vector<uint64_t>::iterator
_linear_search_le(std::vector<uint64_t>::iterator beg,
                  std::vector<uint64_t>::iterator end, uint64_t val);
template void _selection_sort_decreasing<uint64_t>(std::vector<uint64_t> &v);
template void _selection_sort_increasing<uint64_t>(std::vector<uint64_t> &v);
