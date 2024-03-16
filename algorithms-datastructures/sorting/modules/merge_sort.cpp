#include "./print.h"
#include <vector>

template <typename T> using VecSize = typename std::vector<T>::size_type;

template <typename T>
void merge(std::vector<T> &v, VecSize<T> p, VecSize<T> q, VecSize<T> r);

template <typename T> void merge_sort(std::vector<T> &);
template <typename T>
void _merge_sort(std::vector<T> &v, VecSize<T> p, VecSize<T> r);

template <typename T> void merge_sort(std::vector<T> &v) {
  VecSize<T> p = 0;
  VecSize<T> r = v.size() - 1;

  _merge_sort(v, p, r);
}

template <typename T>
void _merge_sort(std::vector<T> &v, VecSize<T> p, VecSize<T> r) {
  if (p >= r) {
    return;
  }
  VecSize<T> q = (p + r) / 2;
  _merge_sort(v, p, q);
  _merge_sort(v, q + 1, r);

  merge(v, p, q, r);
}

template <typename T>
void merge(std::vector<T> &v, VecSize<T> p, VecSize<T> q, VecSize<T> r) {
  std::vector<T> left;
  for (VecSize<T> i = p; i <= q; i++) {
    left.push_back(v[i]);
  }

  std::vector<T> right;
  for (VecSize<T> j = q + 1; j <= r; j++) {
    right.push_back(v[j]);
  }

  VecSize<T> i = 0;
  VecSize<T> j = 0;
  VecSize<T> k = p;
  while (i < left.size() && j < right.size()) {
    if (left[i] < right[j]) {
      v[k] = left[i];
      i++;
    } else {
      v[k] = right[j];
      j++;
    }
    k++;
  }

  while (i < left.size()) {
    v[k] = left[i];
    i++;
    k++;
  }

  while (j < right.size()) {
    v[k] = right[j];
    j++;
    k++;
  }
}

template void merge_sort<uint64_t>(std::vector<uint64_t> &);
