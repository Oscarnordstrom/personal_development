#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

std::vector<std::string> read_file_into_vector(std::ifstream &fs) {
  std::string line, name;
  std::vector<std::string> v_lines;
  while (getline(fs, line)) {
    v_lines.push_back(line);
  }

  return v_lines;
}

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: main.cpp <input_file>" << std::endl;
    return -3;
  }

  std::ifstream in(argv[1]);
  if (!in) {
    std::cerr << "Fail to open file: " << argv[1] << std::endl;
    return -2;
  }
  std::vector<std::string> v_lines = read_file_into_vector(in);
  std::stringstream record;
  std::string output_word;
  for (auto &line : v_lines) {
    record << line;

    while (record >> output_word) {
      cout << output_word << " ";
    }
    cout << endl;
    record.clear();
  }
  return 0;
}