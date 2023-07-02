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

bool compareIsbn(Sales_data &book_1, Sales_data &book_2) {
  return book_1.isbn() < book_2.isbn();
}

int main() {
  Sales_data obj0("a book");
  Sales_data obj1("b book");
  Sales_data obj2("c book");
  Sales_data obj3("d book");
  Sales_data obj4("e book");

  std::vector<Sales_data> v = {obj3, obj2, obj1, obj4, obj0};

  for (Sales_data &item : v) {
    cout << item.isbn() << " ";
  }
  cout << endl;

  std::sort(v.begin(), v.end(), compareIsbn);

  for (Sales_data &item : v) {
    cout << item.isbn() << " ";
  }
  cout << endl;

  return 0;
}
