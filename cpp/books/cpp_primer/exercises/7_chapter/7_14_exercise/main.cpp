#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;
struct Sales_data {
  Sales_data() : bookNo("Default_book"), units_sold(0), revenue(0.0){};

  void print(std::ostream &os) const {
    os << this->bookNo << " " << this->revenue << " " << this->units_sold;
  }

  std::string bookNo;

  unsigned units_sold = 0;

  double revenue = 0.0;
};

int main() {
  Sales_data test;
  test.print(cout);
  cout << endl;

  return 0;
}
