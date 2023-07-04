#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using std::cout;
using std::endl;

int main() {

  std::ifstream input("11.11.in");
  std::string input_str;
  int input_int;
  std::vector<std::pair<std::string, int>> output_v;
  while (input >> input_str >> input_int) {
    std::pair<std::string, int> new_pair(input_str, input_int);
    output_v.push_back(new_pair);
  }

  for (auto &pair : output_v) {
    cout << "string: " << pair.first << " value: " << pair.second << endl;
  }

  return 0;
}
