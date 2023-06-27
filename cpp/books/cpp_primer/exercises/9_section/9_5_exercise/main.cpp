#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

std::vector<int>::iterator
search_for_value_in_vector(std::vector<int>::iterator start,
                           std::vector<int>::iterator stop, int search_value) {
  while (start != stop) {
    if (*start == search_value) {
      return start;
    }
    start++;
  }
  return stop;
}

int main() {
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

  cout << search_for_value_in_vector(v.begin(), v.end(), 5).base() << endl;
  cout << search_for_value_in_vector(v.begin(), v.end(), 1337).base() << endl;
  return 0;
}