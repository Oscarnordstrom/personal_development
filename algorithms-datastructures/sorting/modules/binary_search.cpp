#include <vector>
template <typename T> using IdxType = typename std::vector<T>::size_type;

template <typename T>
typename std::vector<T>::size_type *binary_search(std::vector<T> &v, T value) {
  IdxType<T> i = 0, k = v.size();
  IdxType<T> j = (k - i) / 2;
  while ((i != j) && (k != j)) {
    if (v[j] > value) {
      k = j;
      j = (k - i) / 2;
    } else if (v[j] < value) {
      i = j;
      j = i + (k - i) / 2;
    }
    if (v[j] == value) {
      return new IdxType<T>(j);
    }
  }

  return nullptr;
}

template std::vector<uint64_t>::size_type *
binary_search<uint64_t>(std::vector<uint64_t> &, uint64_t);
