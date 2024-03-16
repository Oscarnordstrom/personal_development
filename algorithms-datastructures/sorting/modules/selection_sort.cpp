#include "./print.h"
#include <iostream>
#include <vector>

template <typename T>
typename std::vector<T>::iterator
_selection_sort_swap_idx_decreasing(typename std::vector<T>::iterator beg,
                                    typename std::vector<T>::iterator end,
                                    T val) {
  typename std::vector<T>::iterator idx = end;
  while (beg != end) {
    if (*beg > val) {
      val = *beg;
      idx = beg;
    }
    beg++;
  }
  return idx;
}

template <typename T> void _selection_sort_decreasing(std::vector<T> &v) {
  if (v.size() < 2) {
    return;
  }

  for (typename std::vector<T>::iterator it = v.begin(); it != v.end(); ++it) {
    typename std::vector<T>::iterator cmp =
        _selection_sort_swap_idx_decreasing(it + 1, v.end(), *it);
    if (cmp != v.end()) {
      std::swap(*cmp, *it);
    }
  }
}

template <typename T>
typename std::vector<T>::iterator
_selection_sort_swap_idx_increasing(typename std::vector<T>::iterator beg,
                                    typename std::vector<T>::iterator end,
                                    T val) {
  typename std::vector<T>::iterator idx = end;
  while (beg != end) {
    if (*beg < val) {
      val = *beg;
      idx = beg;
    }
    beg++;
  }
  return idx;
}

template <typename T> void _selection_sort_increasing(std::vector<T> &v) {
  if (v.size() < 2) {
    return;
  }

  for (typename std::vector<T>::iterator it = v.begin(); it != v.end(); ++it) {
    typename std::vector<T>::iterator cmp =
        _selection_sort_swap_idx_increasing(it + 1, v.end(), *it);

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
template void _selection_sort_decreasing<uint64_t>(std::vector<uint64_t> &v);
template void _selection_sort_increasing<uint64_t>(std::vector<uint64_t> &v);
