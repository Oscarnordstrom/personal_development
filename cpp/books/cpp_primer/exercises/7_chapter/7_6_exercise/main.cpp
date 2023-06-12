#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
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
  void read(std::istream &is) {
    cout << "input data: ";
    is >> this->bookNo >> this->revenue >> this->units_sold;
  }
  void print(std::ostream &os) const {
    os << this->isbn() << " " << this->revenue << " " << this->units_sold;
  }

  string bookNo;
  int units_sold;
  double revenue;
};
int main() {

  Sales_data book_1, book_2, book_3;

  book_1.bookNo = "test_1";
  book_1.units_sold = 1;
  book_1.revenue = 2;

  book_2.bookNo = "test_2";
  book_2.units_sold = 3;
  book_2.revenue = 4;

  book_3 = book_1.add(book_2);

  book_3.print(cout);
	cout << endl;
  book_3.read(cin);
  book_3.print(cout);
	cout << endl;
}