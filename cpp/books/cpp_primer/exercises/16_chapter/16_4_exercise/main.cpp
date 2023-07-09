#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

template <typename _type_iterator, typename _find_value>
_type_iterator new_find(_type_iterator &&begin, _type_iterator &&end,
                        _find_value const &val) {
  while (begin != end) {
    if (*begin == val)
      return begin;
    begin++;
  }
  return end;
}

int main() {
  std::vector<int> v_int = {1, 2, 3, 4, 5};
  auto find_ptr_int = new_find(v_int.begin(), v_int.end(), 4);
  std::cout << &find_ptr_int << std::endl;

  std::vector<std::string> v_str = {"test", "more_testing",
                                    "even_more_testing"};
  auto find_ptr_str = new_find(v_str.begin(), v_str.end(), "more_testing");
  std::cout << &find_ptr_str << std::endl;

  return 0;
}
