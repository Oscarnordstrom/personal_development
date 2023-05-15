#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> v = {0, 1, 2, 3};
  auto pbeg = v.begin();

  cout << *(pbeg + 1) << endl;
  cout << *(pbeg + 2) << endl;
  cout << *(pbeg + 3) << endl;
  cout << *(pbeg + 4) << endl;
  cout << *(pbeg + 5) << endl;
  cout << *(pbeg + 6) << endl;
  cout << *(pbeg + 7) << endl;
  return 0;
}
