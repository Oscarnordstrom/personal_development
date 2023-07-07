#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

int main() {
  std::ifstream input_file("test.txt");
  std::map<std::string, std::set<int>> line_map;
  std::string sentence, word, query;
  std::vector<std::string> line_vec;

  while (std::cout << "Insert word query, q to exit: " && std::cin >> query &&
         query != "q") {

    size_t line_index = 0;
    while (getline(input_file, sentence)) {
      line_vec.push_back(sentence);
      std::istringstream word_split(sentence);
      while (word_split >> word) {
        if (word == query) {
          line_map[word].insert(line_index);
        }
      }
      line_index++;
    }
    std::set<int> &line_indices = line_map[query];
    int number_of_lines = line_indices.size();
    if (number_of_lines == 0) {
      cout << "Word is not part of file." << endl;
      continue;
    }

    for (const int &line_index : line_indices) {
      cout << "\t (line index: " << line_index << ") " << line_vec[line_index]
           << endl;
    }
    cout << "Word: " << query << " appears " << number_of_lines << " times."
         << endl;
  }

  return 0;
}
