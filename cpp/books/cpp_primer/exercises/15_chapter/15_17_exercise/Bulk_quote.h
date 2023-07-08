#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
public:
  Bulk_quote() = default;
  Bulk_quote(const std::string &book, double p, std::size_t qty, double disc);
  double net_price(std::size_t) const override;
};

#endif