// These methods should beconst because they are not modifying
// the underlying object.
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

struct Person {
  string get_name() const { return name; }
  string get_address() const { return address; }

  string name;
  string address;
};

int main() { return 0; }
