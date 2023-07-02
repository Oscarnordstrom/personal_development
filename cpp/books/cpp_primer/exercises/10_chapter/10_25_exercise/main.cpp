#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using namespace std::placeholders;

void elimDups(vector<string> &words) {

  sort(words.begin(), words.end());
  auto end_unique = unique(words.begin(), words.end());
  words.erase(end_unique, words.end());
}

string add(const string &word, const string &ending) {
  string output;
  output = word + ending;
  return output;
}

string make_plural(size_t ctr, const string &word, const string &ending) {
  return (ctr != 1) ? add(word, ending) : word;
}

bool check_size(const std::string &s, std::string::size_type sz) {
  return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
  elimDups(words);
  stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {
    return a.size() < b.size();
  });

  auto check_size6 = std::bind(check_size, _1, sz);
  std::vector<std::string>::iterator big_word =
      std::find_if(words.begin(), words.end(), check_size6);

  auto start_iter_word = words.begin();
  while (start_iter_word != big_word) {
    cout << *start_iter_word << " ";
    start_iter_word++;
  }
  cout << endl;

  while (big_word != words.end()) {
    cout << *big_word << " ";
    big_word++;
  }
  cout << endl;
}

int main() {
  vector<string> v = {"one",   "two",  "large_word", "second_large_word",
                      "three", "four", "five"};
  biggies(v, v.size());

  return 0;
}
