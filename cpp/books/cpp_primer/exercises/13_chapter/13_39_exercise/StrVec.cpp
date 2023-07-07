#include "StrVec.h"

StrVec::StrVec(const StrVec &s) {
  auto newdata = alloc_n_copy(s.begin(), s.end());
  elements = newdata.first;
  first_free = cap = newdata.second;
}
StrVec &StrVec::operator=(const StrVec &rhs) {
  auto data = alloc_n_copy(rhs.begin(), rhs.end());
  free();
  elements = data.first;
  first_free = cap = data.second;
  return *this;
}
StrVec::~StrVec() { free(); }

std::string::size_type StrVec::size() const { return first_free - elements; }
std::string::size_type StrVec::capacity() const { return cap - elements; };
std::string *StrVec::begin() const { return elements; }
std::string *StrVec::end() const { return first_free; }

void StrVec::chk_n_alloc() {
  if (size() == capacity())
    reallocate();
}

void StrVec::reserve(std::size_t n) {
  if (n > capacity()) {
    auto newcapacity = n;
    auto newdata = alloc.allocate(newcapacity);
    auto dest = newdata;
    auto elem = elements;
    for (size_t i = 0; i != size(); ++i)
      std::allocator_traits<decltype(alloc)>::construct(alloc, dest++,
                                                        std::move(*elem++));
    free();

    elements = newdata;
    first_free = dest;
    cap = elements + newcapacity;
  }
}

void StrVec::resize(std::size_t n) {
  if (n > size()) {
    reserve(n);
    for (size_t i = size(); i < n; ++i)
      std::allocator_traits<decltype(alloc)>::construct(alloc, first_free++);
  } else if (n < size()) {
    while (first_free != elements + n)
      std::allocator_traits<decltype(alloc)>::destroy(alloc, --first_free);
  }
}

void StrVec::push_back(const std::string &s) {
  chk_n_alloc();
  std::allocator_traits<std::allocator<std::string>>::construct(
      alloc, first_free++, s);
}

std::pair<std::string *, std::string *>
StrVec::alloc_n_copy(const std::string *b, const std::string *e) {
  auto data = alloc.allocate(e - b);
  return {data, uninitialized_copy(b, e, data)};
}

void StrVec::free() {
  if (elements) {
    for (auto p = first_free; p != elements;)
      std::destroy_at(--p);
    alloc.deallocate(elements, cap - elements);
  }
}

void StrVec::reallocate() {
  auto newcapacity = size() ? 2 * size() : 1;
  auto newdata = alloc.allocate(newcapacity);
  auto dest = newdata;
  auto elem = elements;
  for (size_t i = 0; i != size(); ++i)
    std::allocator_traits<std::allocator<std::string>>::construct(
        alloc, dest++, std::move(*elem++));
  free();

  elements = newdata;
  first_free = dest;
  cap = elements + newcapacity;
}