#include <iostream>
#include <string>

class Employee {
private:
  std::string name;
  int id;
  static int nextId;

public:
  Employee() { id = nextId++; }
  Employee(const std::string &empName) {
    name = empName;
    id = nextId++;
  }

  std::string getName() const { return name; }

  int getID() const { return id; }
};

int Employee::nextId = 1;

int main() {
  Employee emp1;
  Employee emp2("John Doe");

  std::cout << "Employee 1:\n";
  std::cout << "Name: " << emp1.getName() << std::endl;
  std::cout << "ID: " << emp1.getID() << std::endl;

  std::cout << "\nEmployee 2:\n";
  std::cout << "Name: " << emp2.getName() << std::endl;
  std::cout << "ID: " << emp2.getID() << std::endl;

  return 0;
}
