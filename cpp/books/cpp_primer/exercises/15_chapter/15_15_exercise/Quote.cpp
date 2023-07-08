#include "Quote.h"

Quote::Quote(const std::string &book, double sales_price)
    : bookNo(book), price(sales_price) {}

std::string Quote::isbn() const { return bookNo; }

double Quote::net_price(std::size_t n) const { return n * price; }
