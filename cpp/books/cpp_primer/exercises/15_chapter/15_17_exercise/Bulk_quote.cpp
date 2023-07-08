#include "Bulk_quote.h"

Bulk_quote::Bulk_quote(const std::string &book, double p, std::size_t qty,
                       double disc)
    : Disc_quote(book, p, qty, disc) {}

double Bulk_quote::net_price(std::size_t cnt) const {
  if (cnt >= quantity)
    return cnt * (1 - discount) * price;
  else
    return cnt * price;
}
