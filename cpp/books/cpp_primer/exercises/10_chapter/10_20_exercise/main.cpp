#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

int main() {

  std::vector<std::string> v = {"test", "testing", "more_testing", "sm"};

  int long_strs = std::count_if(
      v.begin(), v.end(), [](std::string &str) { return (str.size() > 6); });

  cout << long_strs << endl;

  return 0;
}
