#include <fstream>
#include <iostream>
#include <optional>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

std::optional<vector<string>> file_reader(char *file_path) {
  std::ifstream in(file_path);
  if (!in) {
    return {};
  }
  vector<string> v;
  string iter_string;
  while (in >> iter_string) {
    v.push_back(iter_string);
  }

  return v;
}

int main(int argc, char *argv[]) {
  if (argc > 2) {
    cout << "Error more than one argument detected" << endl;
    return 1;
  } else if (argc == 1) {
    cout << "Error no arguments were supplied" << endl;
    return 1;
  }

  std::optional<vector<string>> file_reader_return = file_reader(argv[1]);
  if (!file_reader_return) {
    cout << "Error file read unsuccessful" << endl;
    return -1;
  }
  vector<string> file_contents = file_reader_return.value();
  for (string &item : file_contents) {
    cout << item << " ";
    cout << endl;
  }
  return 0;
}
