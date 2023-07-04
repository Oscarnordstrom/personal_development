#include <iostream>
#include <map>
#include <string>
using std::cout;
using std::endl;

int main() {

  std::map<std::string, int> word_count = {{"test", 1}, {"testing", 3}};
  std::map<std::string, int>::const_iterator map_it = word_count.cbegin();
  while (map_it != word_count.cend()) {
    cout << map_it->first << " occurs " << map_it->second << " times" << endl;
    ++map_it;
  }

  return 0;
}
