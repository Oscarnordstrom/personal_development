#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <vector>

class QueryResult;

class TextQuery {
private:
  std::shared_ptr<std::vector<std::string>> lines;
  std::map<std::string, std::shared_ptr<std::set<int>>> wordMap;

public:
  TextQuery() = default;

  TextQuery(const std::string &filename)
      : lines(std::make_shared<std::vector<std::string>>()) {
    std::ifstream file(filename);
    std::string line;
    int lineNum = 0;

    while (std::getline(file, line)) {
      lines->push_back(line);
      std::istringstream iss(line);
      std::string word;

      while (iss >> word) {
        auto &lineSet = wordMap[word];
        if (!lineSet)
          lineSet = std::make_shared<std::set<int>>();
        lineSet->insert(lineNum);
      }

      ++lineNum;
    }
  }

  QueryResult query(const std::string &word) const;

  // Copy constructor
  TextQuery(const TextQuery &other)
      : lines(other.lines), wordMap(other.wordMap) {}

  // Assignment operator
  TextQuery &operator=(const TextQuery &other) {
    if (this != &other) {
      lines = other.lines;
      wordMap = other.wordMap;
    }
    return *this;
  }
};

class QueryResult {
private:
  std::string word;
  std::shared_ptr<std::set<int>> lineSet;
  std::shared_ptr<std::vector<std::string>> lines;

public:
  QueryResult() = default;

  QueryResult(const std::string &queryWord,
              std::shared_ptr<std::set<int>> setPtr,
              std::shared_ptr<std::vector<std::string>> vecPtr)
      : word(queryWord), lineSet(setPtr), lines(vecPtr) {}

  // Copy constructor
  QueryResult(const QueryResult &other)
      : word(other.word), lineSet(other.lineSet), lines(other.lines) {}

  // Assignment operator
  QueryResult &operator=(const QueryResult &other) {
    if (this != &other) {
      word = other.word;
      lineSet = other.lineSet;
      lines = other.lines;
    }
    return *this;
  }
};

QueryResult TextQuery::query(const std::string &word) const {
  std::shared_ptr<std::set<int>> lineSet;
  auto it = wordMap.find(word);

  if (it != wordMap.end()) {
    lineSet = it->second;
  }

  return QueryResult(word, lineSet, lines);
}

int main() {
  TextQuery tq("example.txt");
  QueryResult qr = tq.query("example");

  return 0;
}
