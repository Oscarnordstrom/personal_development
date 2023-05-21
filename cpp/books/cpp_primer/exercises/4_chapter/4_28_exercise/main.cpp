#include <iostream>
using std::cout;
using std::endl;

int main() {
  char _char;
  int _int;
  float _float;

  long int _long_int;
  long int _long_long_int;
  double _double;
  long double _long_double_float;

  cout << sizeof _int << endl;
  cout << sizeof _char << endl;
  cout << sizeof _float << endl;

  cout << sizeof _long_int << endl;
  cout << sizeof _long_long_int << endl;

  cout << sizeof _double << endl;
  cout << sizeof _long_double_float << endl;

  return 0;
}
