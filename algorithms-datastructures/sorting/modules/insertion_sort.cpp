#include "./print.h"
#include <iostream>
#include <memory>
#include <vector>

template <typename T> void _insertion_sort_decreasing(std::vector<T> &v) {
  if (v.size() < 2) {
    return;
  }

  T key;
  typename std::vector<T>::size_type j;
  for (typename std::vector<T>::size_type i = 1; i < v.size() + 1; i++) {
    key = v[i - 1];
    j = i - 1;

    while (j > 0 && v[j - 1] < key) {
      v[j] = v[j - 1];
      j = j - 1;
    }
    v[j] = key;
  }
}

template <typename T> void _insertion_sort_increasing(std::vector<T> &v) {
  if (v.size() < 2) {
    return;
  }

  T key;
  typename std::vector<T>::size_type j;
  for (typename std::vector<T>::size_type i = 1; i < v.size() + 1; i++) {
    key = v[i - 1];
    j = i - 1;

    while (j > 0 && v[j - 1] > key) {
      v[j] = v[j - 1];
      j = j - 1;
    }
    v[j] = key;
  }
}

template <typename T> void insertion_sort(std::vector<T> &v, bool decreasing) {
  if (decreasing) {
    _insertion_sort_decreasing(v);
  } else {
    _insertion_sort_increasing(v);
  }
}

template void insertion_sort<long>(std::vector<long> &v, bool);
template void _insertion_sort_decreasing<long>(std::vector<long> &v);
template void _insertion_sort_increasing<long>(std::vector<long> &v);
