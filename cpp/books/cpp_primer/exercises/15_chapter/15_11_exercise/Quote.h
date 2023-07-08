#ifndef QUOTE_H
#define QUOTE_H

#include <string>
class Quote {
public:
  Quote() = default;
  Quote(const std::string &book, double sales_price);
  virtual ~Quote() = default;

  std::string isbn() const;
  double print_total(std::ostream &os, const Quote &item, size_t n);

  virtual double net_price(std::size_t n) const;
  virtual void debug() const;

private:
  std::string bookNo;

protected:
  double price = 0.0;
};

#endif