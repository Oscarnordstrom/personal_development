#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
using std::cout;
using std::endl;

void one() {
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
}

void two() {
  std::ifstream input("11.11.in");
  std::string input_str;
  int input_int;
  std::map<std::string, int> unm;
  while (input >> input_str >> input_int) {
    std::pair<std::string, int> new_pair(input_str, input_int);
    unm.insert(new_pair);
  }

  for (auto &pair : unm) {
    cout << "string: " << pair.first << " value: " << pair.second << endl;
  }
}

void three() {
  std::ifstream input("11.11.in");
  std::string input_str;
  int input_int;
  std::map<std::string, int> unm;
  while (input >> input_str >> input_int) {
    unm.insert({input_str, input_int});
  }

  for (auto &pair : unm) {
    cout << "string: " << pair.first << " value: " << pair.second << endl;
  }
}

int main() {
  one();
  cout << "-------------" << endl;
  two();
  cout << "-------------" << endl;
  three();

  return 0;
}
