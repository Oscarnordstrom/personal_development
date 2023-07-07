#include "QueryResult.h"
#include "TextQuery.h"

QueryResult::QueryResult(TextQuery &tq, const string &word_query)
    : tquery(tq), word_query(word_query) {
  this->line_indices = tquery.mapping[word_query];
  this->line_data = tquery.file_data;
}

void QueryResult::print() {
  if (!line_indices) {
    cout << word_query << " does not exist in the file." << endl;
    return;
  }

  size_t number_of_lines = line_indices->size();
  for (const int &line_index : *line_indices) {
    cout << "\t (line index: " << line_index << ") "
         << (*(line_data))[line_index] << endl;
  }
  cout << "Word: " << word_query << " appears " << number_of_lines << " times."
       << endl;
}

set<int>::iterator QueryResult::begin() { return line_indices->begin(); };

set<int>::iterator QueryResult::end() { return line_indices->end(); };

shared_ptr<vector<string>> QueryResult::get_file() { return line_data; };
