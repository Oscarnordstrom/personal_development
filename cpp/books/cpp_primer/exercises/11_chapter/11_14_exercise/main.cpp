#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
using std::cerr;
using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;
using std::vector;

void addFamily(map<string, vector<pair<string, string>>> &families,
               const string &name) {
  auto ret = families.insert({name, vector<pair<string, string>>()});
  if (!ret.second)
    cerr << "Warning: The family named <" << name << "> already exists."
         << endl;
}

void addChild(map<string, vector<pair<string, string>>> &families,
              const string &family_name, const string &child_name,
              const string &birthday) {
  auto it = families.find(family_name);
  if (it != families.end())
    it->second.push_back({child_name, birthday});
  else
    cerr << "Error: The family <" << family_name
         << "> does not exist for child <" << child_name << "> born on "
         << birthday << "." << endl;
}

int main() {
  map<string, vector<pair<string, string>>> families;
  addFamily(families, "Smith");
  addFamily(families, "Johnson");
  addFamily(families, "Williams");
  addFamily(families,
            "Smith"); // Warning: The family named <Smith> already exists.

  addChild(families, "Smith", "John", "1990-1-1");
  addChild(families, "Smith", "Emma", "1990-1-2");
  addChild(families, "Smith", "Michael", "1990-1-3");
  addChild(families, "Johnson", "Olivia", "1990-1-4");
  addChild(families, "Williams", "Sophia", "1990-1-5");
  addChild(families, "Williams", "Liam", "1990-1-6");
  addChild(families, "Brown", "Isabella", "1990-1-7");

  for (const auto &family : families)
    for (const auto &child : family.second)
      cout << family.first << " " << child.first << " " << child.second << endl;

  return 0;
}
