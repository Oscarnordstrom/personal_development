#include <iostream>
using std::cout;
using std::endl;
using std::string;

// compare the length of two strings
inline bool isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}

int main() {
  string string1 = "Hello";
  string string2 = "World!";

  cout << isShorter(string1, string2) << endl;
  return 0;
}
