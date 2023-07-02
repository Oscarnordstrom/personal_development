#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::list;
using std::string;
void elimDups(list<string> &words) {

  words.sort();
  auto end_unique = std::unique(words.begin(), words.end());
  words.erase(end_unique, words.end());

  auto words_start = words.begin();
  while (words_start != words.end()) {
    cout << *words_start++ << " ";
  }
  cout << endl;
}
int main() {
  list<string> l = {"dup", "dup", "not_dup", "dup"};

  elimDups(l);
  return 0;
}
