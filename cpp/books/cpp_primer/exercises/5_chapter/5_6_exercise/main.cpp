#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {

  int input_grade;
  cout << "Input grade as integer: ";
  cin >> input_grade;

  input_grade >= 90                           ? cout << 'A' << endl
  : (input_grade < 90) && (input_grade >= 80) ? cout << 'B' << endl
                                              : cout << 'C' << endl;

  return 0;
}
