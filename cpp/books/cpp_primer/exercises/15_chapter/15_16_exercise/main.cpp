#include "Bulk_quote.h"
#include "Limited_quote.h"
#include "Quote.h"
#include <iostream>

int main() {
  Quote base_book("123", 50.0);
  Bulk_quote bulk_book("456", 50.0, 10, 0.1);
  Limited_quote limit_book("789", 60.0, 5, 0.2);

  std::size_t quantity = 12;

  // Print net price for base quote
  std::cout << "ISBN: " << base_book.isbn() << ", Quantity: " << quantity
            << ", Total cost: " << base_book.net_price(quantity) << std::endl;

  // Print net price for bulk quote
  std::cout << "ISBN: " << bulk_book.isbn() << ", Quantity: " << quantity
            << ", Total cost: " << bulk_book.net_price(quantity) << std::endl;

  // Print net price for limited quote
  std::cout << "ISBN: " << limit_book.isbn() << ", Quantity: " << quantity
            << ", Total cost: " << limit_book.net_price(quantity) << std::endl;

  return 0;
}
