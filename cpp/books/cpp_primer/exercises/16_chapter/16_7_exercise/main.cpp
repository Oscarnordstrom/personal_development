#include <iostream>
using std::cout;
using std::endl;

template <typename T, size_t N> constexpr size_t my_size(T (&)[N]) { return N; }

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  std::cout << my_size(arr) << std::endl;

  return 0;
}
