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

  v.insert({"Baker", {"Tod", "Tred"}});

  v.erase(v.find("Smith"));

  cout << "Is 'Smith' in the multimap: "
       << (v.find("Smith") != v.end() ? "true" : "false") << endl;

  return 0;
}
