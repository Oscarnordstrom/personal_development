#include <iostream>
#include <vector>

struct X {
  X() { std::cout << "X()" << std::endl; }
  X(const X &) { std::cout << "X(const X&)" << std::endl; }
  X &operator=(const X &) {
    std::cout << "operator=(const X&)" << std::endl;
    return *this;
  }
  ~X() { std::cout << "~X()" << std::endl; }
};

void foo(X x) { std::cout << "Inside foo()" << std::endl; }

int main() {
  X x1; // Default constructor

  X x2 = x1; // Copy constructor
  X x3(x1);  // Copy constructor

  x2 = x3; // Copy assignment operator

  foo(x1); // Copy constructor (passing by value)

  X *px = new X; // Default constructor

  std::vector<X> vec;
  vec.push_back(x1); // Copy constructor (adding to vector)

  delete px; // Destructor

  return 0;
}
