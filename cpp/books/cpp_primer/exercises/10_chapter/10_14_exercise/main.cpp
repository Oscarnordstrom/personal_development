#include <iostream>
using std::cout;
using std::endl;

int main() {

  auto two_sum = [](int first, int second) { return first + second; };

  cout << two_sum(13, 14) << endl;

  return 0;
}
