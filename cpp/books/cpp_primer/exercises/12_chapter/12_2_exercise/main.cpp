#include <initializer_list>
#include <iostream>
#include <list>
#include <memory>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::initializer_list;
using std::shared_ptr;
using std::string;
using std::vector;

class StrBlob {
public:
  typedef vector<string>::size_type size_type;
  StrBlob();
  StrBlob(initializer_list<string> il);
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }

  void push_back(const string &t) { data->push_back(t); }
  void pop_back();
  string &front();
  string &front() const;
  string &back();
  string &back() const;

private:
  shared_ptr<vector<string>> data;
  void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob() : data(std::make_shared<vector<string>>()) {}

StrBlob::StrBlob(initializer_list<string> il)
    : data(std::make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i, const string &msg) const {
  if (i >= data->size())
    throw std::out_of_range(msg);
}

string& StrBlob::front() {
  check(0, "front on empty StrBlob");
  return data->front();
}

string& StrBlob::front() const {
  check(0, "front on empty StrBlob");
  return data->front();
}

string &StrBlob::back() {
  check(0, "back on empty StrBlob");
  return data->back();
}

string &StrBlob::back() const {
  check(0, "back on empty StrBlob");
  return data->back();
}

void StrBlob::pop_back() {
  check(0, "pop_back on empty StrBlob");
  data->pop_back();
}

int main() { 
  
  StrBlob s = {"test", "two"};
  
  return 0; }
