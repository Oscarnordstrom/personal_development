// This program is legal. It assigns the value i to the current element.

#include <iostream>

int &get(int *arry, int index) { return arry[index]; }
int main() {
  int ia[10];
  for (auto item : ia) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  for (int i = 0; i != 10; ++i)
    get(ia, i) = i;

  for (auto item : ia) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}