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
    using Quote::Quote; // Inherit base class constructors
    
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

int main() {
  {
    Quote q1("123", 50.0);
    Quote q2(q1);
    Quote q3(std::move(q1));

    q1 = q2;
    q2 = std::move(q3);

    Quote q4("456", 60.0);
    q1 = q4;
  }

  std::cout << "=================" << std::endl;

  {
    Bulk_quote bq1("789", 70.0, 10, 0.2);
    Bulk_quote bq2(bq1);
    Bulk_quote bq3(std::move(bq1));

    bq1 = bq2;
    bq2 = std::move(bq3);

    Bulk_quote bq4("101112", 80.0, 5, 0.3);
    bq1 = bq4;
  }

  return 0;
}
