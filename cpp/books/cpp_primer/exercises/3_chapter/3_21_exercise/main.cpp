// Did 3_17 to spare time for next exercise. 

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string input_word;
  vector<string> string_vector;
  while (cin >> input_word) {
    string_vector.push_back(input_word);
  }

  for (auto w_iter = string_vector.begin(); w_iter != string_vector.end();
       ++w_iter) {
    for (auto c_iter = w_iter->begin(); c_iter != w_iter->end(); ++c_iter) {
      *c_iter = toupper(*c_iter);
    }
  }

  for (auto element : string_vector) {
    cout << element << endl;
  }
}