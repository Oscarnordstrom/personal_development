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

  for (auto &word : string_vector) {
    for (auto &character : word) {
      character = toupper(character);
    }
  }

  for (auto element : string_vector) {
    cout << element << endl;
  }
}