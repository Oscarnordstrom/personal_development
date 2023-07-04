#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <vector>
using std::cout;
using std::endl;
using std::string;

int main() {

  std::multimap<string, std::vector<string>> v{{"Smith", {"Alice", "Ted"}}};

  string new_family_name = "Baker";
  std::vector<string> children = {"Emma", "Peter", "Henrik"};
  v.insert({new_family_name, children});

  v.insert({"Baker", {"Tod", "Tred"}});

  for (auto item : v) {
    cout << "Family name: " << item.first << " "
         << "Children: ";
    for (auto child : item.second) {
      cout << child << " ";
    }
    cout << endl;
  }

  return 0;
}
