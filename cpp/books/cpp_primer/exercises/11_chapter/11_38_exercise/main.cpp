#include <fstream>
#include <iostream>
#include <istream>
#include <map>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using std::cout;
using std::endl;
using std::ifstream;
using std::istream_iterator;
using std::map;
using std::ostream_iterator;
using std::string;
using std::stringstream;
using std::unordered_map;
using std::vector;

unordered_map<string, string> build_map(ifstream &fin) {
  unordered_map<string, string> um;
  string acronym, translation;
  while (fin >> acronym && getline(fin, translation)) {
    um.insert({acronym, translation.substr(1)});
  }

  return um;
};

string &translate_acronym(unordered_map<string, string> &translator,
                          string &input) {
  if (translator.find(input) != translator.end()) {
    input = translator[input];
  }
  return input;
}

void translate_file(ifstream &input_file,
                    unordered_map<string, string> &translations) {
  string sentence, word;
  string output_sentence;
  while (getline(input_file, sentence)) {
    stringstream split_sentences(sentence);
    while (split_sentences >> word) {
      word = translate_acronym(translations, word);
      output_sentence += (word + " ");
    }
  }
  cout << output_sentence << endl;
}

void a() {
  ifstream acronyms("acronyms.txt");
  unordered_map<string, string> translator = build_map(acronyms);

  ifstream sentences("sentences.txt");
  translate_file(sentences, translator);
};

void b() {
  map<string, int> word_count = {{"test", 1}, {"testing", 3}};
  map<string, int>::const_iterator map_it = word_count.cbegin();
  while (map_it != word_count.cend()) {
    cout << map_it->first << " occurs " << map_it->second << " times" << endl;
    ++map_it;
  }
}

int main() {

  a();
  b();

  return 0;
}
