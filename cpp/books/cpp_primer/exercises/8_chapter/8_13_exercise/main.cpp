#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::ifstream;
using std::istringstream;
using std::ostringstream;
using std::string;
using std::vector;

struct PersonInfo {
  string fullName;
  vector<string> contactNumbers;
};

constexpr int kPhoneNumberLength = 11;

bool isValidPhoneNumber(const string &number) {
  if (number.size() != kPhoneNumberLength)
    return false;
  for (const auto &c : number)
    if (c < '0' || c > '9')
      return false;
  return true;
}

string formatPhoneNumber(const string &number) {
  return number.substr(0, 3) + '-' + number.substr(3, 4) + '-' +
         number.substr(7, 4);
}

int main() {
  string filename;
  cin >> filename;
  ifstream inputFile(filename);
  if (!inputFile.is_open()) {
    std::cerr << "Failed to open file: " << filename << std::endl;
    return -1;
  }

  string line, word;
  vector<PersonInfo> people;
  while (getline(inputFile, line)) {
    istringstream record(line);
    PersonInfo info;
    record >> info.fullName;
    while (record >> word)
      info.contactNumbers.push_back(word);
    people.push_back(info);
  }

  for (const auto &entry : people) {
    ostringstream formattedNumbers, invalidNumbers;
    for (const auto &number : entry.contactNumbers) {
      if (!isValidPhoneNumber(number)) {
        invalidNumbers << " " << number;
      } else
        formattedNumbers << " " << formatPhoneNumber(number);
    }
    if (invalidNumbers.str().empty())
      cout << entry.fullName << " " << formattedNumbers.str() << endl;
    else
      cerr << "Input error: " << entry.fullName
           << " Invalid number(s): " << invalidNumbers.str() << endl;
  }

  return 0;
}