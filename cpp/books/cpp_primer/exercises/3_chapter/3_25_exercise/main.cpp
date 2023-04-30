#include <iostream>
#include <vector>
using std::cin;
using std::vector;

int main() {
  // count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99,
  // 100
  vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
  unsigned grade;
  while (cin >> grade) { // read the grades
    if (grade <= 100)
      ++*(scores.begin() + grade / 10);
    for (const auto &elem : scores)
      std::cout << elem << ' ';
    std::cout << std::endl;
  }
}
