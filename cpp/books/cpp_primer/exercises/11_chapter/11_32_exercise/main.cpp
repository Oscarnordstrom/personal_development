#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <vector>
using std::cout;
using std::endl;
using std::multimap;
using std::pair;
using std::string;
using std::vector;

int main() {

  std::multimap<string, std::vector<string>> v{{"Smith", {"Alice", "Ted"}}};

  string new_family_name = "Baker";
  std::vector<string> children = {"Emma", "Peter", "Henrik"};
  v.insert({new_family_name, children});

  v.insert({"Knight", {"Hannah", "Emelie"}});

  multimap<string, vector<string>>::iterator begin_it = v.begin();
  multimap<string, vector<string>>::iterator end_it = v.end();

  while (begin_it != end_it) {
    cout << "Parent: " << begin_it->first << endl << " Children: " << endl;
    std::sort(begin_it->second.begin(), begin_it->second.end());
    for (string &item : begin_it->second) {
      cout << item << " ";
    }
    cout << endl;
    begin_it++;
  }

  return 0;
}
