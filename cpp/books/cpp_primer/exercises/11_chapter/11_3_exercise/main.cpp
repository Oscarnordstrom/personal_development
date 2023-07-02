#include <iostream>
#include <string>

#include <unordered_map>
using std::cin;
using std::cout;
using std::endl;

int main() {
  std::string input_word;
  std::unordered_map<std::string, int> str_map;
  while (cin >> input_word) {
    str_map[input_word]++;
  }

  for (std::pair<std::string, int> key_value_pair : str_map) {
    cout << "Word: " << key_value_pair.first
         << " Count: " << key_value_pair.second << endl;
  }

  return 0;
}
