#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
  string bookNo;
  int units_sold;
  double cost_per_item;
};

int main() {
  std::cout << "Insert sales data in the following format:\nISBN units_sold "
               "cost_per_item"
            << endl;

  Sales_data total_book, iter_book;

  int book_index = 1;
  std::cout << "Book " << book_index << ": ";
  cin >> total_book.bookNo >> total_book.units_sold >> total_book.cost_per_item;

  while (cin) {
    std::cout << "Book " << book_index << ": ";
    cin >> iter_book.bookNo >> iter_book.units_sold >> iter_book.cost_per_item;

    if (iter_book.bookNo == total_book.bookNo) {
      if (total_book.cost_per_item != iter_book.cost_per_item) {
        cout << "Error: Inconsistent cost per item for IBSN: "
             << iter_book.bookNo << endl;
        break;
      }
      total_book.units_sold += iter_book.units_sold;
    } else {
      cout << "Total revenue for ibsn: " << total_book.bookNo << " is "
           << total_book.units_sold * total_book.cost_per_item << endl;
      book_index++;
      total_book = iter_book;
    }
  }
}