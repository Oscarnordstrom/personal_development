#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H

#include <fstream>
#include "StrBlob.h"
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using std::ifstream;
using std::map;
using std::set;
using std::shared_ptr;
using std::string;
using std::vector;

class QueryResult;

class TextQuery {
public:
  TextQuery(ifstream &);
  void query(const string &);
  void query(const char *);
  void query(char *);

  friend class QueryResult;

private:
  shared_ptr<vector<string>> file_data;
  map<string, shared_ptr<set<int>>> mapping;

  bool _query_word_from_line(const string &word_query, const string &line);
  void _create_mapping_from_word_query(const string &word_query);
  void _print_mapping(const string &word_query);
  void _do_query(string word);
  QueryResult _return_query(const string &word_query);
};

#endif // TEXT_QUERY_H
