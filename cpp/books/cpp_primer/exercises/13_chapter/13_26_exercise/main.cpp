#include <iostream>
#include <memory>
#include <string>
#include <vector>

class StrBlob {
public:
  using size_type = std::vector<std::string>::size_type;

  // Default constructor
  StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}

  // Constructor taking an initializer list
  StrBlob(std::initializer_list<std::string> il)
      : data(std::make_shared<std::vector<std::string>>(il)) {}

  // Copy constructor
  StrBlob(const StrBlob &other)
      : data(std::make_shared<std::vector<std::string>>(*other.data)) {}

  // Copy-assignment operator
  StrBlob &operator=(const StrBlob &rhs) {
    if (this != &rhs) {
      data = std::make_shared<std::vector<std::string>>(*rhs.data);
    }
    return *this;
  }

  // Accessors
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }

  void push_back(const std::string &str) { data->push_back(str); }
  void pop_back();

  std::string &front();
  std::string &back();

  // Const versions of front and back
  const std::string &front() const;
  const std::string &back() const;

private:
  std::shared_ptr<std::vector<std::string>> data;

  void check(size_type index, const std::string &message) const;
};

void StrBlob::pop_back() {
  check(0, "pop_back on empty StrBlob");
  data->pop_back();
}

std::string &StrBlob::front() {
  check(0, "front on empty StrBlob");
  return data->front();
}

std::string &StrBlob::back() {
  check(0, "back on empty StrBlob");
  return data->back();
}

const std::string &StrBlob::front() const {
  check(0, "front on empty StrBlob");
  return data->front();
}

const std::string &StrBlob::back() const {
  check(0, "back on empty StrBlob");
  return data->back();
}

void StrBlob::check(size_type index, const std::string &message) const {
  if (index >= data->size())
    throw std::out_of_range(message);
}
