#include <iostream>
using std::cout;
using std::endl;

template <typename T, unsigned N> void print(const T (&p)[N]) {
  unsigned iter = 0;
  while (iter < N) {
    std::cout << p[iter++] << std::endl;
  }
}

int main() {

  int test[3] = {1, 2, 3};

  print(test);

  return 0;
}
