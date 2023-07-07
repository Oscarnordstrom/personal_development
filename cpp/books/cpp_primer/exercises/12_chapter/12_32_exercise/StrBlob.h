#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

class StrBlob {
  friend class StrBlobPtr;
  StrBlobPtr begin();
  StrBlobPtr end();

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