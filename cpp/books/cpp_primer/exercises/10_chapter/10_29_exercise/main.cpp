#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

int main() {
  std::ifstream fin("text.txt");

  std::istream_iterator<std::string> in_str(fin), eof;
  std::vector<std::string> v_str(in_str, eof);

  for (std::string &item : v_str) {
    cout << item << " ";
  }
  cout << endl;

  return 0;
}
