#include "StrVec.h"
#include <iostream>

int main() {
  StrVec sv;

  sv.push_back("Hello");
  sv.push_back("World");
  std::cout << "Size: " << sv.size() << std::endl;

  std::cout << "Capacity: " << sv.capacity() << std::endl;

  std::cout << "Elements:";
  for (auto it = sv.begin(); it != sv.end(); ++it) {
    std::cout << " " << *it;
  }
  std::cout << std::endl;

  sv.reserve(5);
  std::cout << "Capacity after reserve: " << sv.capacity() << std::endl;

  sv.resize(4);
  std::cout << "Size after resize: " << sv.size() << std::endl;

  StrVec sv2;
  sv2 = sv;
  std::cout << "Capacity of sv2: " << sv2.capacity() << std::endl;

  return 0;
}
