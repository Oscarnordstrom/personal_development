#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

  vector<int> grades = {10, 50, 60, 70, 80, 90};

  for (auto grade : grades) {
    string finalgrade = (grade > 90)   ? "high pass"
                        : (grade < 60) ? "fail"
                        : (grade < 75) ? "low pass"
                                       : "pass";

    cout << finalgrade << endl;
  }

  for (auto grade : grades) {
    string finalgrade;
    if (grade > 90) {
      finalgrade = "high pass";
    } else if (grade < 60) {
      finalgrade = "fail";
    } else if (grade < 75) {
      finalgrade = "low pass";
    } else {
      finalgrade = "pass";
    }

    cout << finalgrade << endl;
  }

  return 0;
}
