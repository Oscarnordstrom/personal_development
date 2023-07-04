#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <string>
using std::cout; using std::endl; using std::map; using std::string; using std::vector; using std::pair;

int main() { 
    


map<string, vector<int>> example;
 std::pair<std::map<std::string, std::vector<int>>::iterator, bool> result = example.insert({"testing", {1}});
return 0;
}
