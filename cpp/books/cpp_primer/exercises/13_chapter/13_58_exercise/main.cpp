#include <iostream>

class FooVersion1 {
public:
  FooVersion1() {}
  FooVersion1(const FooVersion1 &) {
    std::cout << "FooVersion1: Copy constructor called." << std::endl;
  }

  FooVersion1 sorted() const & {
    std::cout << "FooVersion1: sorted() const & called." << std::endl;
    return FooVersion1(*this).sorted();
  }
};

class FooVersion2 {
public:
  FooVersion2() {}
  FooVersion2(const FooVersion2 &) {
    std::cout << "FooVersion2: Copy constructor called." << std::endl;
  }

  FooVersion2 sorted() const & {
    FooVersion2 ret(*this);
    std::cout << "FooVersion2: sorted() const & called." << std::endl;
    return ret.sorted();
  }
};

int main() {
  FooVersion1 foo1;
  FooVersion2 foo2;

  foo1.sorted();
  foo2.sorted();

  return 0;
}
