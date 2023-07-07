#include <memory>
#include <string>

static std::allocator<std::string> alloc;

class StrVec {
public:
  StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
  StrVec(const StrVec &);
  StrVec(std::initializer_list<std::string> il);
  StrVec &operator=(const StrVec &);
  ~StrVec();

  void push_back(const std::string &s);
  std::string::size_type size() const;
  std::string::size_type capacity() const;

  std::string *begin() const;
  std::string *end() const;

  void reserve(std::size_t n);
  void resize(std::size_t n);

private:
  void chk_n_alloc();
  std::pair<std::string *, std::string *> alloc_n_copy(const std::string *b,
                                                       const std::string *e);
  void free();
  void reallocate();

  std::string *elements;
  std::string *first_free;
  std::string *cap;
};
