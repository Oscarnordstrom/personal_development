// Quote.h
#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <string>

class Quote {
public:
  Quote() { std::cout << "Quote default constructor" << std::endl; }
  Quote(const Quote &rhs) : bookNo(rhs.bookNo), price(rhs.price) {
    std::cout << "Quote copy constructor" << std::endl;
  }
  Quote(Quote &&rhs) noexcept
      : bookNo(std::move(rhs.bookNo)), price(std::move(rhs.price)) {
    std::cout << "Quote move constructor" << std::endl;
  }
  Quote &operator=(const Quote &rhs) {
    std::cout << "Quote copy assignment operator" << std::endl;
    if (this != &rhs) {
      bookNo = rhs.bookNo;
      price = rhs.price;
    }
    return *this;
  }
  Quote &operator=(Quote &&rhs) noexcept {
    std::cout << "Quote move assignment operator" << std::endl;
    if (this != &rhs) {
      bookNo = std::move(rhs.bookNo);
      price = std::move(rhs.price);
    }
    return *this;
  }
  virtual ~Quote() { std::cout << "Quote destructor" << std::endl; }

  Quote(const std::string &book, double sales_price)
      : bookNo(book), price(sales_price) {
    std::cout << "Quote constructor with parameters" << std::endl;
  }

  std::string isbn() const { return bookNo; }
  virtual double net_price(std::size_t n) const { return n * price; }

private:
  std::string bookNo;

protected:
  double price = 0.0;
};

#endif

#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

class Bulk_quote : public Quote {
public:
  Bulk_quote() : Quote() {
    std::cout << "Bulk_quote default constructor" << std::endl;
  }

  Bulk_quote(const std::string &book, double sales_price, std::size_t qty,
             double disc)
      : Quote(book, sales_price), min_qty(qty), discount(disc) {
    std::cout << "Bulk_quote constructor with parameters" << std::endl;
  }

  double net_price(std::size_t cnt) const override {
    if (cnt >= min_qty)
      return cnt * (1 - discount) * price;
    else
      return cnt * price;
  }

private:
  std::size_t min_qty = 0;
  double discount = 0.0;
};

#endif

#include <iostream>
#include <memory>
#include <vector>

int main() {
  std::vector<std::shared_ptr<Quote>> quotes;

  quotes.push_back(std::make_shared<Quote>("123", 50.0));
  quotes.push_back(std::make_shared<Bulk_quote>("456", 50.0, 10, 0.1));
  quotes.push_back(std::make_shared<Bulk_quote>("789", 60.0, 5, 0.2));

  double total_price = 0.0;
  std::size_t quantity = 12;

  for (const auto &quote : quotes) {
    total_price += quote->net_price(quantity);
  }

  std::cout << "Total net price: " << total_price << std::endl;

  return 0;
}
