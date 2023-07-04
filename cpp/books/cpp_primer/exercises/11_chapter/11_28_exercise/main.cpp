#include <iostream>
#include <map>
#include <string>
#include <vector>
using std::cout;
using std::endl;

int main() {
  std::map<std::string, std::vector<int>> mv = {{"test", {1, 2, 3}}};

  std::map<std::string, std::vector<int>>::iterator valid_find_res =
      mv.find("test");
  std::map<std::string, std::vector<int>>::iterator invalid_find_res =
      mv.find("testing");

  cout << (valid_find_res->second[0]) << endl;

  return 0;
}
