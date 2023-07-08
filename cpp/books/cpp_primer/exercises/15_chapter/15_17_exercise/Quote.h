#ifndef QUOTE_H
#define QUOTE_H

#include <string>

class Quote {
public:
  Quote() = default;
  Quote(const std::string &book, double sales_price);
  std::string isbn() const;
  virtual double net_price(std::size_t n) const;
  virtual ~Quote() = default;

private:
  std::string bookNo;

protected:
  double price = 0.0;
};

#endif