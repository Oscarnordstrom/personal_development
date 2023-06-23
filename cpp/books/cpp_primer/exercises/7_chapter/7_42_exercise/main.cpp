#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Employee {
  string name;
  short age;
  string title;

public:
  Employee(string init_name, short init_age, string init_title) {
    name = init_name;
    age = init_age;
    title = init_title;
  };

  Employee() : Employee("Unkown_name", 0, "Unknown_title"){};

  Employee(std::istream &is) {
    cout << "Input data: ";
    is >> name >> age >> title;
  };

  std::ostream &display(std::ostream &os = cout) {
    cout << " " << name << " " << age << " " << title << endl;
    return os;
  };
};

int main() {
  Employee test1("Robert", 19, "Bartender");
  Employee test2(std::cin);
  Employee test3;

  test1.display();
  test2.display();
  test3.display();
  return 0;
}
