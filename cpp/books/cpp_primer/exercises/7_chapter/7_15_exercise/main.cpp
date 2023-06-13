#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Person {

  Person() : name("Default_name"), address("Default address") {}

  Person(std::istream &is) { this->read(is); }

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
