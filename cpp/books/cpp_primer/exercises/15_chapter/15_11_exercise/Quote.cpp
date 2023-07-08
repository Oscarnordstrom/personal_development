#include "Quote.h"
#include <iostream>
#include <string>

Quote::Quote(const std::string &book, double sales_price)
    : bookNo(book), price(sales_price) {}

std::string Quote::isbn() const { return bookNo; }
double Quote::net_price(std::size_t n) const { return n * price; }

double Quote::print_total(std::ostream &os, const Quote &item, size_t n) {
  double ret = item.net_price(n);
  os << "ISBN: " << item.isbn() // calls Quote::isbn
     << " # sold: " << n << " total due: " << ret << std::endl;
  return ret;
}
void Quote::debug() const {
  std::cout << "Quote:" << std::endl;
  std::cout << "  BookNo: " << bookNo << std::endl;
  std::cout << "  Price: " << price << std::endl;
};
