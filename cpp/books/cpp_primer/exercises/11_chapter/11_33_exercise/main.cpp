#include <fstream>
#include <iostream>
#include <istream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::ifstream;
using std::istream_iterator;
using std::map;
using std::ostream_iterator;
using std::string;
using std::stringstream;
using std::vector;

map<string, string> build_map(ifstream &fin) {
  map<string, string> um;
  string acronym, translation;
  while (fin >> acronym && getline(fin, translation)) {
    um.insert({acronym, translation.substr(1)});
  }

  return um;
};

string &translate_acronym(map<string, string> &translator, string &input) {
  if (translator.find(input) != translator.end()) {
    input = translator[input];
  }
  return input;
}

void translate_file(ifstream &input_file, map<string, string> &translations) {
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

int main() {
  ifstream acronyms("acronyms.txt");
  map<string, string> translator = build_map(acronyms);

  ifstream sentences("sentences.txt");
  translate_file(sentences, translator);
  return 0;
}
