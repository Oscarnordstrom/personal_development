#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using namespace std::placeholders;

bool check_size(const std::string &s, std::string::size_type sz) {

  return s.size() >= sz;
}

int main() {

  std::vector<std::string> v = {"test", "more_testing", "testing", "sm"};
  auto check_size6 = std::bind(check_size, _1, 6);

  std::vector<std::string>::iterator word =
      std::find_if(v.begin(), v.end(), check_size6);
  cout << *word << endl;

  return 0;
}
