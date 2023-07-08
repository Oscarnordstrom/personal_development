#include "Limited_quote.h"

Limited_quote::Limited_quote(const std::string &book, double price,
                             std::size_t qty, double disc)
    : Disc_quote(book, price, qty, disc) {}

double Limited_quote::net_price(std::size_t cnt) const {
  if (cnt <= quantity)
    return cnt * (1 - discount) * price;
  else
    return quantity * (1 - discount) * price + (cnt - quantity) * price;
}
