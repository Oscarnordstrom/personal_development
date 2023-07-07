#include <string>

class HasPtr {
public:
  HasPtr(const std::string &s = std::string())
      : data(new std::string(s)), count(new size_t(1)) {}

  HasPtr(const HasPtr &other) : data(other.data), count(other.count) {
    ++(*count);
  }

  HasPtr &operator=(const HasPtr &other) {
    ++(*other.count);
    if (--(*count) == 0) {
      delete data;
      delete count;
    }
    data = other.data;
    count = other.count;
    return *this;
  }

  ~HasPtr() {
    if (--(*count) == 0) {
      delete data;
      delete count;
    }
  }

private:
  std::string *data;
  size_t *count;
};
