#include <iostream>
using std::cout;
using std::endl;
#include <iostream>

#include <iostream>
#include <vector>
#include <algorithm>

class HasPtr {
public:
    // Constructor
    HasPtr(int value = 0) : data(new int(value)) {}

    // Copy constructor
    HasPtr(const HasPtr& other) : data(new int(*other.data)) {}

    // Copy assignment operator
    HasPtr& operator=(const HasPtr& other) {
        HasPtr temp(other); // Create a temporary object using the copy constructor
        swap(temp); // Swap the temporary object with the current object
        return *this;
    }

    // Destructor
    ~HasPtr() { delete data; }

    // Swap function
    void swap(HasPtr& other) {
        std::cout << "Swap executed" << std::endl;
        std::swap(data, other.data);
    }

    // Less than operator
    bool operator<(const HasPtr& other) const {
        return *data < *other.data;
    }

    int* data;
};


int main() {
  HasPtr a(10);
  HasPtr b(20);

  std::cout << "Before swap:" << std::endl;
  std::cout << "a: " << *a.data << std::endl;
  std::cout << "b: " << *b.data << std::endl;

  a.swap(b); // Call the swap function

  std::cout << "After swap:" << std::endl;
  std::cout << "a: " << *a.data << std::endl;
  std::cout << "b: " << *b.data << std::endl;

  return 0;
}
