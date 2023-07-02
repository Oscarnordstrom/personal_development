#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

void elimDups(vector<string> &words) {

  sort(words.begin(), words.end());
  for_each(words.begin(), words.end(),
           [](const string &s) { cout << s << " "; });
  cout << endl;
  auto end_unique = unique(words.begin(), words.end());
  for_each(words.begin(), words.end(),
           [](const string &s) { cout << s << " "; });
  cout << endl;

  words.erase(end_unique, words.end());
  for_each(words.begin(), words.end(),
           [](const string &s) { cout << s << " "; });
  cout << endl;
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
  auto wc = find_if(words.begin(), words.end(),
                    [sz](const string &a) { return a.size() >= sz; });

  auto count = words.end() - wc;
  cout << count << " " << make_plural(count, "word", "s") << " of length " << sz
       << " or longer" << endl;
  for_each(wc, words.end(), [](const string &s) { cout << s << " "; });
  cout << endl;
}

int main() {
  vector<string> v = {"one", "two", "three", "four", "five"};
  biggies(v, v.size());

  return 0;
}
