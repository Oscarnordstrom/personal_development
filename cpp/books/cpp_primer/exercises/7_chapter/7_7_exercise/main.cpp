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
  std::cout << "Insert sales data in the following format:\nISBN units_sold "
               "cost_per_item"
            << endl;

  Sales_data total_book, iter_book;

  int book_index = 1;
  total_book.read(cin);

  while (cin) {
    iter_book.read(cin);

    if (iter_book.isbn() != total_book.isbn()) {
      total_book.print(cout);
      cout << endl;
      book_index++;
      total_book = iter_book;
      continue;
    }

    total_book.combine(iter_book);
  }
}