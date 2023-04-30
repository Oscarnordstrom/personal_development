#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print_adjacents(vector<int> &int_vector) {
  int sum_of_ints;

  for (auto iterator = int_vector.begin(); iterator != int_vector.end();
       ++iterator) {
    sum_of_ints = 0;
    if (iterator != int_vector.begin()) {
      sum_of_ints += *(iterator - 1);
    }

    sum_of_ints += *iterator;

    if (iterator != (int_vector.end() - 1)) {
      sum_of_ints += (*iterator + 1);
    }

    cout << sum_of_ints << endl;
  }
}

void print_first_and_last(vector<int> &int_vector) {
  int sum_of_ints;
  auto beginning = int_vector.begin();
  auto end = int_vector.end() - 1;
  auto mid = beginning + (end - beginning) / 2;

  while ((beginning != mid) && (end != mid)) {
    cout << *beginning * *end << endl;

    ++beginning;
    --end;
  }
}

int main() {
  vector<int> int_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
              &int_vector_ref = int_vector;
  cout << "Adjacents:" << endl;
  print_adjacents(int_vector_ref);

  cout << "First and lasts:" << endl;
  print_first_and_last(int_vector_ref);
}