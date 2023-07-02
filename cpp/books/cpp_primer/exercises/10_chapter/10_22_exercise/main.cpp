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

  std::vector<std::string> v = {"test", "testing", "more_testing", "sm"};
  auto check_size6 = std::bind(check_size, _1, 6);

  int count_words = std::count_if(v.begin(), v.end(), check_size6);
  cout << count_words << endl;

  return 0;
}
