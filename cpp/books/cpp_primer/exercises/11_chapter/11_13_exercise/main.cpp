#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
using std::cout;
using std::endl;
using std::string;

typedef std::pair<string, string> child_info;

int main() {

  std::unordered_map<string, std::vector<child_info>> v{
      {"Smith", {{"Alice", "01-02-2003"}, {"Ted", "13-12-2001"}}}};

  string new_family_name = "Baker";
  std::vector<child_info> children = {{"Emma", "01-01-1999"},
                                      {"Peter", "15-10-2005"},
                                      {"Henrik", "19-07-2000"}};

  v.insert({new_family_name, children});

  for (auto item : v) {
    cout << "Family name: " << item.first << " " << endl
         << "Children: " << endl;
    for (auto child : item.second) {
      cout << " Child name: " << child.first << " Birthday: " << child.second
           << " " << endl;
    }
    cout << endl;
  }

  return 0;
}
