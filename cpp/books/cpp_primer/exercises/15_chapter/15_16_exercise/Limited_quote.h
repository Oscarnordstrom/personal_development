#include "Disc_quote.h"

class Limited_quote : public Disc_quote {
public:
  Limited_quote() = default;
  Limited_quote(const std::string &book, double p, std::size_t qty,
                double disc);
  double net_price(std::size_t) const override;
};
