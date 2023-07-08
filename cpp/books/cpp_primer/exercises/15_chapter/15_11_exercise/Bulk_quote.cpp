#include "Bulk_quote.h"
#include "Quote.h"
#include <iostream>

Bulk_quote::Bulk_quote(const std::string &book, double p, std::size_t qty,
                       double disc)
    : Quote(book, p), min_qty(qty), discount(disc){};

double Bulk_quote::net_price(size_t cnt) const {
  double total = 0;
  if (cnt >= min_qty) {
    total += min_qty * price * discount;
    total += (cnt - min_qty) * price;
  } else {
    total += cnt * price;
  }
  return total;
}

void Bulk_quote::debug() const {
  std::cout << "Bulk_quote" << std::endl;
  std::cout << "  Price: " << price << std::endl;
  std::cout << "  Minimum_quantity: " << min_qty << std::endl;
  std::cout << "  Discount: " << discount << std::endl;
};
