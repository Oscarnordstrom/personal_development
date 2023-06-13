#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;
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

  string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &other_sales_data) {
    units_sold += other_sales_data.units_sold;
    revenue += other_sales_data.revenue;
    return *this;
  };
  Sales_data add(const Sales_data &other_sales_data) const {
    Sales_data new_sales_data;
    new_sales_data.bookNo = this->bookNo;
    new_sales_data.revenue = this->revenue + other_sales_data.revenue;
    new_sales_data.units_sold = this->units_sold + other_sales_data.units_sold;
    return new_sales_data;
  }

  double avg_price() const;

  std::string bookNo;

  unsigned units_sold = 0;

  double revenue = 0.0;
};

int main() {
  Sales_data total(cin);

  if (cin) { // read the first transaction
    while (cin) {
      Sales_data trans(cin);
      if (total.isbn() == trans.isbn()) // check the isbns
        total.combine(trans);           // update the running total
      else {
        total.print(cout);
        cout << endl;  // print the results
        total = trans; // process the next book
      }
    }
    total.print(cout);
    cout << endl;                // print the last transaction
  } else {                       // there was no input
    cerr << "No data?!" << endl; // notify the user
  }
  return 0;
}
