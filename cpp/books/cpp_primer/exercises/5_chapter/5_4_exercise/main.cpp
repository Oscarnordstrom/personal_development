#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main() {
  string s = "Test";
  string::iterator iter = s.begin();
  while (iter != s.end())
    iter++;

  // bool status;
  // while (status = find(word)) { /* ... */ }
  // if (!status) { /* ... */ }

  return 0;
}
