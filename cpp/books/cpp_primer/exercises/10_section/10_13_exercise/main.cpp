#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

class Sales_data {
  std::string bookNo;

public:
  std::string &isbn() { return bookNo; }
  Sales_data(std::string input_str) { this->bookNo = input_str; }
};

bool checkSizeLessThanFive(Sales_data &book_1) {
  return book_1.isbn().size() < 5;
}

int main() {
  Sales_data obj0("long name");
  Sales_data obj1("sm");
  Sales_data obj2("very long name");
  Sales_data obj3("four");
  Sales_data obj4("fivec");

  std::vector<Sales_data> v = {obj3, obj2, obj1, obj4, obj0};
  cout << "input: ";
  for (Sales_data &item : v) {
    cout << item.isbn() << " ";
  }
  cout << endl;

  std::vector<Sales_data>::iterator part_it =
      std::partition(v.begin(), v.end(), checkSizeLessThanFive);

  cout << "long partitioned: ";

  while (part_it != v.end()) {
    cout << part_it->isbn() << ", ";
    part_it++;
  }
  cout << endl;

  return 0;
}
