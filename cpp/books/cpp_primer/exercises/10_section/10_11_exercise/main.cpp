#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

void elimDups(vector<string> &input_v) {

  std::sort(input_v.begin(), input_v.end());
  vector<string>::iterator unique_end =
      std::unique(input_v.begin(), input_v.end());

  cout << (unique_end == input_v.end()) << endl;
  input_v.erase(unique_end, input_v.end());
}

bool isshorter(const string &str_1, const string &str_2) {
  return str_1.size() < str_2.size();
}

int main() {

  vector<string> v = {"apple", "apple", "banana", "apple", "citrus", "apple"};
  elimDups(v);

  std::stable_sort(v.begin(), v.end(), isshorter);

  for (string &item : v) {
    cout << item << " ";
  }
  cout << std::endl;
  return 0;
}
