#include <iostream>
#include <string>

class HasPtr {
public:
  HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}

  HasPtr(const HasPtr &other) : ps(new std::string(*other.ps)), i(other.i) {}

  HasPtr &operator=(const HasPtr &rhs) {
    if (this != &rhs) { // self-assignment check
      delete ps;        // deallocate current memory

      // Copy the values from the rhs object
      ps = new std::string(*rhs.ps);
      i = rhs.i;
    }
    return *this; // return the updated object
  }

  void printData() const {
    std::cout << "String: " << *ps << ", Integer: " << i << std::endl;
  }

private:
  std::string *ps;
  int i;
};

int main() {
  HasPtr obj1("Hello");
  HasPtr obj2("World");

  obj1.printData();
  obj2.printData();

  obj1 = obj2;

  obj1.printData();
  obj2.printData();

  return 0;
}
