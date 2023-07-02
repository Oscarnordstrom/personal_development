#include <fstream>
#include <iostream>
#include <string>

class Sales_data;
std::istream &read(std::istream &, Sales_data &);

class Sales_data {
  friend Sales_data add(const Sales_data &, const Sales_data &);
  friend std::istream &read(std::istream &, Sales_data &);
  friend std::ostream &print(std::ostream &, const Sales_data &);
  friend std::ofstream &write(std::ofstream &fs, const Sales_data &item);

public:
  // Sales_data() : bookNo(""), units_sold(0), revenue(0.0) {}
  Sales_data() : Sales_data("", 0, 0.0) {}
  // Sales_data(const std::string &no) : bookNo(no) {}
  explicit Sales_data(const std::string &no) : Sales_data(no, 0, 0.0) {}
  // Sales_data(const std::string &no = "") : bookNo(no) {}
  Sales_data(const std::string &no, unsigned us, double price)
      : bookNo(no), units_sold(us), revenue(price * us) {}
  explicit Sales_data(std::istream &is) : Sales_data() { read(is, *this); }
  // Sales_data(std::istream &is = std::cin) { read(is, *this); }

  std::string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &);

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

std::ofstream &write(std::ofstream &fs, const Sales_data &item) {
  fs << item.isbn() << " " << item.units_sold << " " << item.revenue << " "
     << item.avg_price();
  return fs;
}

inline double Sales_data::avg_price() const {
  return units_sold ? revenue / units_sold : 0;
}

int main(int argc, char **argv) {
  if (argc != 3) {
    std::cerr << "Usage: main.cpp <input_file> <output_file>" << std::endl;
    return -3;
  }
  std::ifstream in(argv[1]);
  if (!in) {
    std::cerr << "Fail to open file: " << argv[1] << std::endl;
    return -2;
  }

  std::ofstream out(argv[2]);
  if (!out) {
    std::cerr << "Fail to open file: " << argv[2] << std::endl;
    return -2;
  }

  Sales_data total;
  if (read(in, total)) {
    Sales_data trans;
    while (read(in, trans)) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(std::cout, total) << std::endl;
        write(out, total);
        out << std::endl;
        total = trans; // Use default copy constructor
      }
    }
    print(std::cout, total) << std::endl;
  } else {
    std::cerr << "No data!" << std::endl;
    return -1;
  }

  return 0;
}