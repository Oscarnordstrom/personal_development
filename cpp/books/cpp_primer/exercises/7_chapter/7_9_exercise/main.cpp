// These methods should beconst because they are not modifying
// the underlying object.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Person {
  string get_name() const { return name; }
  string get_address() const { return address; }

  void read(std::istream &is) {
    cout << "input data: ";
    is >> this->name >> this->address;
  }
  void print(std::ostream &os) const {
    os << this->name << " " << this->address;
  }

  string name;
  string address;
};

int main() {

  Person test;
  test.read(cin);
  test.print(cout);
  cout << endl;

  return 0;
}
