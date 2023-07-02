#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using std::cout;
using std::endl;

int main() {
  std::vector<std::string> v = {"testone", "testtwo", "testthree"};
  cout << std::accumulate(v.begin(), v.end(), std::string()) << endl;

  return 0;
}
