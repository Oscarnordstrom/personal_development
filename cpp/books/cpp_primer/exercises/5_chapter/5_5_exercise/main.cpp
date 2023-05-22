#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  int input_grade;
  cout << "Input grade between 0 and 100: ";
  cin >> input_grade;

  if (input_grade > 100) {
    cout << "A" << endl;
  } else if ((input_grade > 90) && (input_grade < 100)) {
    cout << "B" << endl;
  } else if ((input_grade > 80) && (input_grade <= 90)) {
    cout << "C" << endl;
  } else if ((input_grade > 70) && (input_grade <= 80)) {
    cout << "D" << endl;
  } else {
    cout << "E" << endl;
  }

  return 0;
}
