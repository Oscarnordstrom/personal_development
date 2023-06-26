#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

std::ostream &print_file_contents(std::ostream &out, std::ifstream &fs) {
  std::string line, name;
  long int phone_number;
  std::vector<long int> phone_numbers;
  while (getline(fs, line)) {
    std::istringstream record(line);
    record >> name;
    cout << name << " ";
    while (record >> phone_number)
      cout << phone_number << " ";
    cout << endl;
  }

  return out;
}

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: main.cpp <input_file> <output_file>" << std::endl;
    return -3;
  }

  std::ifstream in(argv[1]);
  if (!in) {
    std::cerr << "Fail to open file: " << argv[1] << std::endl;
    return -2;
  }

  print_file_contents(std::cout, in);

  return 0;
}
