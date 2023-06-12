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
  std::cout << "Book " << book_index << ": ";
  cin >> total_book.bookNo >> total_book.units_sold >> total_book.revenue;

  while (cin) {
    std::cout << "Book " << book_index << ": ";
    cin >> iter_book.bookNo >> iter_book.units_sold >> iter_book.revenue;

    if (iter_book.isbn() != total_book.isbn()) {
      cout << "Total revenue for ibsn: " << total_book.bookNo << " is "
           << total_book.revenue << endl;
      book_index++;
      total_book = iter_book;
      continue;
    }

    total_book.combine(iter_book);
  }
}