// More verbose and more confusing to use insert
#include <iostream>
#include <map>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main() {
  map<string, size_t> word_count;
  string word;

  while (cin >> word)
    ++word_count.insert({word, 0}).first->second;
  for (const auto &w : word_count)
    cout << w.first << " occurs " << w.second
         << ((w.second > 1) ? " times" : " time") << endl;

  return 0;
}
