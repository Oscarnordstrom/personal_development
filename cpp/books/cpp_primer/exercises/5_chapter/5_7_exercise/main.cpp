#include <iostream>
using std::cout;
using std::endl;

int get_value() { return 1; }

int main() {
  int ival1 = 5, ival2 = 7;

  if (ival1 != ival2)
    ival1 = ival2;
  else
    ival1 = ival2 = 0;

  cout << ival1 << " " << ival2 << endl;

  int ival = 1, minval = 6, occurs = 2;
  if (ival < minval) {
    minval = ival;
    occurs = 1;
  }

  cout << minval << " " << occurs << endl;

  if (int ival = get_value())
    cout << "ival = " << ival << endl;
  else if (!ival)
    cout << "ival = 0\n";

  if (ival == 0)
    ival = get_value();
  cout << ival << endl;
  return 0;
}
