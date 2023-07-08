#include "Bulk_quote.h"
#include "Quote.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {

  Quote q("testing", 100);
  q.debug();

  Bulk_quote bq("testing", 100, 15, 0.8);
  bq.debug();
  return 0;
}
