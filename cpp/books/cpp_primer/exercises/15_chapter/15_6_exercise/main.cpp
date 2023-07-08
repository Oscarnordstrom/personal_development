#include "Bulk_quote.h"
#include "Quote.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {

  Quote q("testing", 100);

  q.print_total(std::cout, q, 50);

  Bulk_quote bq("tested", 15, 20, 0.8);
  bq.print_total(std::cout, bq, 15);

  return 0;
}
