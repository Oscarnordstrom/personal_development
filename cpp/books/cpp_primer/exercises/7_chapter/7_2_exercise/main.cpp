#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
  string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &other_sales_data) {
    units_sold += other_sales_data.units_sold;
    revenue += other_sales_data.revenue;
    return *this;
  };

  string bookNo;
  int units_sold;
  double revenue;
};

int main() {}