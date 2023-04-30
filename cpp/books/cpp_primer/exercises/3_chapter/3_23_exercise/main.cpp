// Basically same as 3_17

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<int> int_vector = {1, 2, 3, 4, 5};

  for (auto int_iter = int_vector.begin(); int_iter != int_vector.end();
       ++int_iter) {
    *int_iter = *int_iter * *int_iter;
  }

  for (auto integer : int_vector) {
    cout << integer << endl;
  }
}