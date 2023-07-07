#ifndef UTILITIES_H
#define UTILITIES_H

#include <algorithm>
#include <fstream>
#include <iostream>
#include <set>
#include <string>
using std::cin;
using std::cout;
using std::ifstream;
using std::set;
using std::string;

bool CompareWords(const string &word_query, const string &word);
void RemovePunctuations(string &str);
void ParseWord(string &word);
void runQueries(ifstream &infile);

#endif // UTILITIES_H