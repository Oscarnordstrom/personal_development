#include "QueryResult.h"
#include "TextQuery.h"
#include "Utilities.h"
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::map;
using std::set;
using std::shared_ptr;
using std::string;
using std::vector;

int main() {

  ifstream input_file("bible.txt");
  runQueries(input_file);

  return 0;
}
