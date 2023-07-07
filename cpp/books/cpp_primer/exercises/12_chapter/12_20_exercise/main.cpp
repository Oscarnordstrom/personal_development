#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

class StrBlobPtr;

class StrBlob {
public:
  StrBlob(std::vector<std::string> &input_vec)
      : data(std::make_shared<std::vector<std::string>>(input_vec)) {}
  StrBlobPtr begin();
  StrBlobPtr end();

private:
  friend class StrBlobPtr;

  std::shared_ptr<std::vector<std::string>> data;
};

class StrBlobPtr {
public:
  StrBlobPtr() : curr(0) {}
  StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
  std::string &deref() const;
  StrBlobPtr &incr();
  std::shared_ptr<std::vector<std::string>> check(std::size_t,
                                                  const std::string &) const;
  std::weak_ptr<std::vector<std::string>> wptr;
  std::size_t curr;
};

StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end() { return StrBlobPtr(*this, data->size()); }

std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t i, const std::string &msg) const {
  auto ret = wptr.lock();
  if (!ret) {
    throw std::runtime_error("unbound StrBlobPtr");
  }
  if (i >= ret->size()) {
    throw std::out_of_range(msg);
  }
  return ret;
}

std::string &StrBlobPtr::deref() const {
  auto p = check(curr, "dereference past end");
  return (*p)[curr];
}

StrBlobPtr &StrBlobPtr::incr() {
  check(curr, "increment past end of StrBlobPtr");
  ++curr;
  return *this;
}

int main() {
  std::ifstream input("12.20.in");
  std::string line;
  std::vector<std::string> input_v;

  while (getline(input, line)) {
    input_v.push_back(line);
  }

  StrBlob str_blob(input_v);
  StrBlobPtr ptr = str_blob.begin();

  // Print each element in the StrBlob
  while (true) {
    try {
      cout << ptr.deref() << endl;
      ptr.incr();
    } catch (const std::out_of_range &ex) {
      break; // Reached the end of the StrBlob
    }
  }

  return 0;
}
