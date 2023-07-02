#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
using std::cin;
using std::cout;
using std::endl;

void word_parser(std::string &input_word, std::set<char> &disallowed_chars) {

  std::string::iterator dis_char_it;
  while (dis_char_it != input_word.end()) {
    dis_char_it = std::find_if(input_word.begin(), input_word.end(),
                               [disallowed_chars](char character) {
                                 return (disallowed_chars.find(character) !=
                                         disallowed_chars.end());
                               });
    input_word.erase(dis_char_it);
  }

  for (char &character : input_word) {
    character = tolower(character);
  }
}

int main() {
  std::string input_word;
  std::unordered_map<std::string, int> str_map;
  std::set<char> disallowed_chars;
  disallowed_chars.insert('.');

  while (cin >> input_word) {
    word_parser(input_word, disallowed_chars);
    str_map[input_word]++;
  }

  for (std::pair<std::string, int> key_value_pair : str_map) {
    cout << "Word: " << key_value_pair.first
         << " Count: " << key_value_pair.second << endl;
  }

  return 0;
}
