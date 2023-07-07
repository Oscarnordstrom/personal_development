#include "Utilities.h"
#include "TextQuery.h"

bool CompareWords(const string &word_query, const string &word) {
  string word_query_modified = word_query;
  RemovePunctuations(word_query_modified);

  std::transform(word_query_modified.begin(), word_query_modified.end(),
                 word_query_modified.begin(), ::tolower);
  string word_lower = word;
  std::transform(word_lower.begin(), word_lower.end(), word_lower.begin(),
                 ::tolower);

  return (word_query_modified == word_lower);
}

void RemovePunctuations(std::string &str) {
  const std::set<char> charsToRemove = {',', '.', '?',  '!',
                                        ';', ':', '\'', '\"'};

  for (auto it = str.rbegin(); it != str.rend(); ++it) {
    char c = *it;
    if (charsToRemove.find(c) != charsToRemove.end()) {
      str.erase(std::next(it).base());
    } else {
      break;
    }
  }
}

void ParseWord(string &word) {
  RemovePunctuations(word);
  std::transform(word.begin(), word.end(), word.begin(), ::tolower);
}

void runQueries(ifstream &infile) {

  TextQuery tq(infile);
  while (true) {
    cout << "enter word to look for, or q to quit: ";
    string s;

    if (!(cin >> s) || s == "q")
      break;

    tq.query(s);
  }
}