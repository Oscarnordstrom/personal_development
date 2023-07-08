#include <algorithm>
#include <cstring>
#include <iostream>
#include <memory>

class String {
public:
  String() : elements(nullptr), first_free(nullptr), cap(nullptr) {}

  String(const char *c_str) {
    auto data = alloc_n_copy(c_str, c_str + std::strlen(c_str));
    elements = data.first;
    first_free = cap = data.second;
  }

  // copy constructor
  String(const String &str) {
    std::cout << "Copying" << std::endl;
    auto data = alloc_n_copy(str.begin(), str.end());
    elements = data.first;
    first_free = cap = data.second;
  }

  // move constructor
  String(String &&str) noexcept
      : elements(str.elements), first_free(str.first_free), cap(str.cap) {
    std::cout << "moving" << std::endl;
    str.elements = str.first_free = str.cap = nullptr;
  }

  // copy assignment operator
  String &operator=(const String &str) {
    std::cout << "Copy by assignment" << std::endl;
    auto data = alloc_n_copy(str.begin(), str.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
  }

  // move assignment operator
  String &operator=(String &&str) noexcept {
    std::cout << "Moving by assignment" << std::endl;
    if (this != &str) {
      free();
      elements = str.elements;
      first_free = str.first_free;
      cap = str.cap;
      str.elements = str.first_free = str.cap = nullptr;
    }
    return *this;
  }

  ~String() { free(); }

  char *begin() const { return elements; }
  char *end() const { return first_free; }

private:
  static std::allocator<char> alloc;

  void free() {
    if (elements) {
      std::destroy(elements, first_free);
      std::allocator_traits<std::allocator<char>>::deallocate(alloc, elements,
                                                              cap - elements);
    }
  }

  std::pair<char *, char *> alloc_n_copy(const char *begin, const char *end) {
    auto data = std::allocator_traits<std::allocator<char>>::allocate(
        alloc, end - begin);
    return {data, std::uninitialized_copy(begin, end, data)};
  }

  char *elements;
  char *first_free;
  char *cap;
};

std::allocator<char> String::alloc;

int main() {
  // Default constructor
  String str1;

  // Constructor with C-string
  String str2("Hello, World!");

  // Copy constructor
  String str3(str2);

  // Move constructor
  String str4(std::move(str2));

  // Copy assignment operator
  str1 = str3;

  // Move assignment operator
  str3 = std::move(str4);

  // Print out strings
  for (char *it = str1.begin(); it != str1.end(); ++it)
    std::cout << *it;
  std::cout << std::endl;

  for (char *it = str3.begin(); it != str3.end(); ++it)
    std::cout << *it;
  std::cout << std::endl;

  return 0;
}
