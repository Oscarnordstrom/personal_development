#include <iostream>
#include <vector>
int main() {
  std::vector<int> vector_one(10, 42);
  std::vector<int> vector_two = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

  std::vector<int> vector_three;
  for (int idx = 0; idx != 10; idx++) {
    vector_three.push_back(42);
  }

  std::cout << vector_one.size() << std::endl;
  std::cout << vector_two.size() << std::endl;
  std::cout << vector_three.size() << std::endl;
}