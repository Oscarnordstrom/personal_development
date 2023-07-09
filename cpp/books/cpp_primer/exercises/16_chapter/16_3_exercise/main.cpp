#include <iostream>
#include <string>
using std::cout;
using std::endl;

class Sales_data;
std::istream &read(std::istream &, Sales_data &);

class Sales_data {
  friend Sales_data add(const Sales_data &, const Sales_data &);
  friend std::istream &read(std::istream &, Sales_data &);
  friend std::ostream &print(std::ostream &, const Sales_data &);

public:
  // Sales_data() : bookNo(""), units_sold(0), revenue(0.0) {}
  Sales_data(const std::string &no) : bookNo(no) {}
  // Sales_data(const std::string &no = "") : bookNo(no) {}
  Sales_data(const std::string &no, unsigned us, double price)
      : bookNo(no), units_sold(us), revenue(price * us) {}
  // Sales_data(std::istream &is) { read(is, *this); }
  Sales_data(std::istream &is = std::cin) { read(is, *this); }

  std::string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &);

  inline bool operator<(const Sales_data &rhs) const {
    return this->isbn() < rhs.isbn();
  }

private:
  double avg_price() const;
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs; // Use default copy constructor
  sum.combine(rhs);
  return sum;
}

std::istream &read(std::istream &is, Sales_data &item) {
  double price;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = item.units_sold * price;
  return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
  os << item.isbn() << " " << item.units_sold << " " << item.revenue << " "
     << item.avg_price();
  return os;
}

inline double Sales_data::avg_price() const {
  return units_sold ? revenue / units_sold : 0;
}

template <typename T> int compare(T const &input_one, T const &input_two) {

  if (input_one < input_two)
    return -1;
  if (input_two < input_one)
    return 1;

  return 0;
};

int main() {

  Sales_data sd1("testing");
  Sales_data sd2("more_testing");

  std::cout << compare(sd1, sd2) << std::endl;

  return 0;
}
