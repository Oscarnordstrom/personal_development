#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <deque>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

int main() {
  std::istream_iterator<int> in_int(cin), eof;
  std::vector<int> v_int(in_int, eof);
  std::sort(v_int.begin(), v_int.end());

  std::ostream_iterator<int> out_iter(cout, " ");

  std::unique_copy(v_int.begin(), v_int.end(), out_iter);
  cout << endl;

  return 0;
}
