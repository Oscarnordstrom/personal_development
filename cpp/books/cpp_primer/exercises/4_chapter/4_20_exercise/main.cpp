#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

  vector<string> v1 = {"foo", "bar"};

  for (auto iter = v1.begin(); iter != v1.end(); iter++) {
    cout << *iter++ << endl; // Increments the value of iter, retrieves the
                             // pre-incremented value.
  }

  vector<string> v2 = {"foo", "bar"};

  for (auto iter = v1.begin(); iter != v1.end(); iter++) {
    // cout << (*iter)++ << endl;
    // Illegal.Cannot increment the value of a string.
  }

  vector<string> v3 = {"foo", "bar"};

  for (auto iter = v1.begin(); iter != v1.end(); iter++) {
    // cout << *iter.empty() << endl;
    // Illegal. Attempts to use empty() method on a iterator type.
  }

  vector<string> v4 = {"foo", "bar"};

  for (auto iter = v1.begin(); iter != v1.end(); iter++) {
    // cout << *iter.empty() << endl;
    // Illegal. Attempts to use empty() method on a iterator type.
  }

  vector<string> v5 = {"foo", "bar"};

  for (auto iter = v1.begin(); iter != v1.end(); iter++) {
    cout << iter->empty() << endl;
    // Legal. -> operator dereferences pointer and uses empty() methd on object
    // retrieved.
  }

  vector<string> v6 = {"foo", "bar"};

  for (auto iter = v1.begin(); iter != v1.end(); iter++) {
    // cout << ++*iter << endl;
    // Illegal. Similarly to the equivalent postfix operator, the prefix
    // operator ++ is not defined for strings.
  }

  vector<string> v7 = {"foo", "bar"};

  for (auto iter = v1.begin(); iter != v1.end(); iter++) {
    iter++->empty();
    // Legal. Increments the iterator by one and uses empty() method on next
    // element.
  }
  return 0;
}
