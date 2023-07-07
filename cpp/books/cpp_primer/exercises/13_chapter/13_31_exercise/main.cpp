#include <iostream>
using std::cout;
using std::endl;
#include <iostream>

#include <algorithm>
#include <iostream>
#include <vector>

class HasPtr {
public:
  // Constructor
  HasPtr(int value = 0) : data(new int(value)) {}

  // Copy constructor
  HasPtr(const HasPtr &other) : data(new int(*other.data)) {}

  // Copy assignment operator
  HasPtr &operator=(const HasPtr &other) {
    HasPtr temp(other); // Create a temporary object using the copy constructor
    swap(temp);         // Swap the temporary object with the current object
    return *this;
  }

  // Destructor
  ~HasPtr() { delete data; }

  // Swap function
  void swap(HasPtr &other) {
    std::cout << "Swap executed" << std::endl;
    std::swap(data, other.data);
  }

  // Less than operator
  bool operator<(const HasPtr &other) const { return *data < *other.data; }

  int *data;
};

int main() {
  std::vector<HasPtr> vec;
  vec.emplace_back(5);
  vec.emplace_back(2);
  vec.emplace_back(8);

  std::cout << "Before sort:" << std::endl;
  for (const HasPtr &elem : vec) {
    std::cout << *elem.data << " ";
  }
  std::cout << std::endl;

  std::sort(vec.begin(), vec.end());

  std::cout << "After sort:" << std::endl;
  for (const HasPtr &elem : vec) {
    std::cout << *elem.data << " ";
  }
  std::cout << std::endl;

  return 0;
}
