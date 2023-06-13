#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Sales_data {
  Sales_data() = default;

  Sales_data(const std::string &s) : bookNo(s) {}

  Sales_data(const std::string &s, unsigned n, double p)
      : bookNo(s), units_sold(n), revenue(p * n) {}

  Sales_data(std::istream &is) { read(is); };

  void read(std::istream &is) {
    int price;
    cout << "input data: ";
    is >> this->bookNo >> price >> this->units_sold;
    this->revenue = price * this->units_sold;
  }
  void print(std::ostream &os) const {
    os << this->isbn() << " " << this->revenue << " " << this->units_sold;
  }

  std::string isbn() const { return bookNo; }

  Sales_data &combine(const Sales_data &);

  double avg_price() const;

  std::string bookNo;

  unsigned units_sold = 0;

  double revenue = 0.0;
};

int main() {

  Sales_data book_1;
  book_1.print(cout);
  cout << endl;

  Sales_data book_2("The Brothers Karamazov");
  book_2.print(cout);
  cout << endl;

  Sales_data book_3("Test", 3.0, 50);
  book_3.print(cout);
  cout << endl;

  Sales_data book_4(cin);
  book_4.print(cout);
  cout << endl;

  return 0;
}
