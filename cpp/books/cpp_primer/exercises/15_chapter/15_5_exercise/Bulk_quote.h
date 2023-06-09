#include "Quote.h"
#include <string>

class Bulk_quote : public Quote {
  Bulk_quote() = default;
  Bulk_quote(const std::string &, double, std::size_t, double);
Bulk_quote(const std::string &book, double p, std::size_t qty,
                       double disc);

  double net_price(std::size_t) const override;
private:
  std::size_t min_qty = 0;
  double discount = 0.0;
};