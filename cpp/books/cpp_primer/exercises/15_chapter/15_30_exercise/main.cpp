#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

class Quote {
public:
  Quote() = default;
  Quote(const std::string &book, double pri) : bookNo(book), price(pri) {}
  virtual ~Quote() = default;

  std::string isbn() const { return bookNo; }
  virtual double net_price(std::size_t n) const { return n * price; }
  virtual std::ostream &debug(std::ostream &os) const {
    os << "ISBN: " << bookNo << ", price: " << price;
    return os;
  }

protected:
  double price = 0.0;

private:
  std::string bookNo;
};

class Bulk_quote : public Quote {
public:
  Bulk_quote() = default;
  Bulk_quote(const std::string &book, double pri, std::size_t qty, double disc)
      : Quote(book, pri), quantity(qty), discount(disc) {}

  double net_price(std::size_t n) const override {
    if (n >= quantity)
      return n * price * (1 - discount);
    else
      return n * price;
  }

  std::ostream &debug(std::ostream &os) const override {
    Quote::debug(os);
    os << ", min_qty: " << quantity << ", discount: " << discount;
    return os;
  }

private:
  std::size_t quantity = 0;
  double discount = 0.0;
};

class Basket {
public:
  void add_item(const std::shared_ptr<Quote> &sale) { items.push_back(sale); }

  void add_item(const Quote &sale) {
    items.push_back(std::make_shared<Quote>(sale));
  }

  void add_item(Quote &&sale) {
    items.push_back(std::make_shared<Quote>(std::move(sale)));
  }

  double total_receipt(std::ostream &os) const {
    double sum = 0.0;

    for (const auto &item : items) {
      os << "Book: " << item->isbn()
         << ", quantity: 20, price: " << item->net_price(20) << std::endl;
      sum += item->net_price(20);
    }

    os << "Total: " << sum << std::endl;
    return sum;
  }

private:
  std::vector<std::shared_ptr<Quote>> items;
};

int main() {
  Basket basket;

  // Add items to the basket
  basket.add_item(Quote("abc", 5.0));
  basket.add_item(Bulk_quote("def", 10.0, 5, 0.2));

  // Calculate and print the total receipt
  basket.total_receipt(std::cout);

  return 0;
}
