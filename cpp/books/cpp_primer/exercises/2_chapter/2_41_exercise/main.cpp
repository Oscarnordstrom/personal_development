// Only doing 1_22.  
#include <iostream>
#include <stdlib.h>
struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  Sales_data sum_books;
  std::string input_string;
  unsigned input_units_sold;
  double input_revenue;

  std::cout << "Insert information for book 1." << std::endl;
  std::cin >> input_string >> input_units_sold >> input_revenue;
  sum_books.bookNo = input_string;
  sum_books.units_sold = input_units_sold;
  sum_books.revenue = input_revenue;

  for (int book_index = 2; book_index <= 4; ++book_index) {
    std::cout << "Insert information for book " << book_index << "."
              << std::endl;
    Sales_data iter_book;
    std::cin >> input_string >> input_units_sold >> input_revenue;
    iter_book.bookNo = input_string;
    iter_book.units_sold = input_units_sold;
    iter_book.revenue = input_revenue;

    if (sum_books.bookNo != iter_book.bookNo) {
      std::cout << "The inserted ISBN for the books are different" << std::endl;
      std::exit(EXIT_FAILURE);
    } else {
      sum_books.revenue += iter_book.revenue;
      sum_books.units_sold += iter_book.units_sold;
    }
  }
  std::cout << "Total units sold:" <<  sum_books.units_sold << std::endl
            << "Total revenue:" << sum_books.revenue<< std::endl;
  return 0;
}
