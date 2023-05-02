#include <iostream>
using std::cout;
using std::endl;

int main() {

  char c_1[7] = "tmp";
  const char c_2[4] = "pmt";

  strcat(c_1, c_2);

  for (auto element : c_1) {
    cout << element;
  }
  cout << endl;
  return 0;
}
