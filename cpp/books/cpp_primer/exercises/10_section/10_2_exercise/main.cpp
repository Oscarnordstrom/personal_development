#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

int main() {
  std::vector<std::string> v = {"testone", "testtwo", "testthree"};
  cout << std::count(v.begin(), v.end(), "testing") << std::endl;

  return 0;
}
