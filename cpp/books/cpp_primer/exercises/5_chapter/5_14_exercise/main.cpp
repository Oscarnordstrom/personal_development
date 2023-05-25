#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  int ctr = 0, max_ctr = 0;
  string max_string = "";
  string current_string = "";
  string iter_string = "";
  while (cin >> iter_string) {
    if (iter_string == current_string) {
      ctr++;
    } else {
      ctr = 1;
      current_string = iter_string;
    }

    if (ctr > max_ctr) {
      max_ctr = ctr;
      max_string = current_string;
    }
  }
  cout << "The string that has been input the most: " << max_string
       << " for a total of: " << max_ctr << " times." << endl;
  return 0;
}
