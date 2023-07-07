#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H

class TextQuery;

#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::ifstream;
using std::map;
using std::set;
using std::shared_ptr;
using std::string;
using std::stringstream;
using std::vector;

class QueryResult {
public:
  QueryResult(TextQuery &, const string &);
  set<int>::iterator begin();
  set<int>::iterator end();
  shared_ptr<vector<string>> get_file();

  void print();

private:
  TextQuery &tquery;
  string word_query;
  shared_ptr<set<int>> line_indices;
  shared_ptr<vector<string>> line_data;
};

#endif // QUERY_RESULT_H
