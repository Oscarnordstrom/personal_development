#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Sales_data {
  friend std::istream &read(std::istream &is, Sales_data &input_data);
  friend std::ostream &print(std::ostream &os, const Sales_data &input_data);

public:
  Sales_data() = default;
  Sales_data(const std::string &s, unsigned n, double p)
      : bookNo(s), units_sold(n), revenue(p * n) {}
  Sales_data(const std::string &s) : bookNo(s) {}
  Sales_data(std::istream &);
  std::string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &);

private:
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
std::istream &read(std::istream &is, Sales_data &input_data) {
  cout << "input data: ";
  is >> input_data.bookNo >> input_data.revenue >> input_data.units_sold;
  return is;
};
std::ostream &print(std::ostream &os, const Sales_data &input_data) {
  os << input_data.isbn() << " " << input_data.revenue << " "
     << input_data.units_sold;
  return os;
};

int main() {
  Sales_data book_1;
  print(cout, book_1);
  cout << endl;

  Sales_data book_2("The Brothers Karamazov");
  print(cout, book_2);
  cout << endl;

  Sales_data book_3("Test", 3.0, 50);
  print(cout, book_3);
  cout << endl;

  Sales_data book_4;
  read(cin, book_4);
  print(cout, book_4);
  cout << endl;
  return 0;
}
