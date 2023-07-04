// Any hashable type is able to be used as a subscript to a map,
// if it its keys are defined as that type.
#include <iostream>
#include <map>
using std::cout;
using std::endl;

int main() {
  std::map<char, int> m;

  int ret_m = m['a'];
  ret_m++;
  cout << m['a'] << endl;

  m['b']++;
  cout << m['b'] << endl;

  return 0;
}
