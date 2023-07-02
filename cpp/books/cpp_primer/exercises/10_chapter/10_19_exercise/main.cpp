#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

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

void biggies(vector<string> &words, vector<string>::size_type sz) {
  elimDups(words);
  stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {
    return a.size() < b.size();
  });
  auto partitioned_iter =
      stable_partition(words.begin(), words.end(),
                       [sz](const string &a) { return a.size() >= sz; });

  for_each(partitioned_iter, words.end(),
           [](const string &s) { cout << s << " "; });
  cout << endl;
}

int main() {
  vector<string> v = {"one", "two", "three", "four", "five"};
  biggies(v, v.size());

  return 0;
}
