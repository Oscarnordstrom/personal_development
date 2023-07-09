#include <iostream>
using std::cout;
using std::endl;

template <typename T, size_t N> T *my_begin(T (&array)[N]) { return &array[0]; }

template <typename T, size_t N> T *my_end(T (&array)[N]) {
  return &array[N]; // pointing one past the end
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  auto begin = my_begin(arr);
  auto end = my_end(arr);

  for (auto it = begin; it != end; ++it) {
    std::cout << *it << " ";
  }

  return 0;
}
