#include "TextQuery.h"
#include "QueryResult.h"
#include "Utilities.h"

TextQuery::TextQuery(ifstream &input_file) : file_data(new vector<string>) {
  string line;
  while (getline(input_file, line)) {
    file_data->push_back(line);
  }
}

void TextQuery::query(const string &word) { _do_query(word); };

void TextQuery::query(const char *word) {
  string str_word(word);
  _do_query(str_word);
};

void TextQuery::query(char *word) {
  string str_word(word);
  _do_query(str_word);
};

void TextQuery::_do_query(string word) {
  ParseWord(word);

  if (this->mapping.find(word) == this->mapping.end()) {
    _create_mapping_from_word_query(word);
  };

  QueryResult query = _return_query(word);
  query.print();
}

bool TextQuery::_query_word_from_line(const string &word_query,
                                      const string &line) {
  stringstream word_split(line);
  string iter_word;

  while (word_split >> iter_word) {
    RemovePunctuations(iter_word);
    if (CompareWords(word_query, iter_word))
      return true;
  }

  return false;
}

void TextQuery::_create_mapping_from_word_query(const string &word_query) {
  size_t line_index = 0;
  vector<string> &data = *(this->file_data);
  for (string &line : data) {
    bool word_is_in_line = _query_word_from_line(word_query, line);
    if (word_is_in_line) {
      if (this->mapping.find(word_query) == this->mapping.end()) {
        this->mapping[word_query] = std::make_shared<set<int>>();
      }
      this->mapping[word_query]->insert(line_index);
    }
    line_index++;
  }
};

void TextQuery::_print_mapping(const string &word_query) {
  auto key_value_pair = this->mapping.find(word_query);
  const string &key = key_value_pair->first;
  shared_ptr<set<int>> &value = key_value_pair->second;

  if (value->size() == 0) {
    cout << word_query << " does not exist in the file." << endl;
    return;
  }

  cout << "Word: " << key << " appears " << value->size() << " times." << endl;
  for (const int &line_index : *value) {
    cout << "\t (line index: " << line_index << ") "
         << (*(this->file_data))[line_index] << endl;
  }
};

QueryResult TextQuery::_return_query(const string &word_query) {
  return QueryResult(*this, word_query);
};