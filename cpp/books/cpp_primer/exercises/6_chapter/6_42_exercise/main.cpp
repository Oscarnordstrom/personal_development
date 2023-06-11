#include <iostream>
using std::cout;
using std::endl;
using std::string;

// return the plural version of word if ctr is greater than 1
string make_plural(size_t ctr, const string &word, const string &ending = "s") {
  return (ctr > 1) ? word + ending : word;
}

int main() {
  string success = "success";
  string failure = "failure";

  cout << success << " " << failure << endl;

  string p_success = make_plural(success.size(), success);
  string p_failure = make_plural(failure.size(), failure);

  cout << p_success << " " << p_failure << endl;

  return 0;
}
