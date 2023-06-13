#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Person {

  friend std::istream &read(std::istream &is, Person &input_person);
  friend std::ostream &print(std::ostream &os, Person const &input_person);

public:
  string get_name() const { return name; }
  string get_address() const { return address; }

private:
  string name;
  string address;
};

std::istream &read(std::istream &is, Person &input_person) {
  cout << "input data: ";
  is >> input_person.name >> input_person.address;
  return is;
}

std::ostream &print(std::ostream &os, Person const &input_person) {
  os << input_person.name << " " << input_person.address;
  return os;
}

int main() {

  Person test;
  read(cin, test);
  print(cout, test);
  cout << endl;

  return 0;
}
