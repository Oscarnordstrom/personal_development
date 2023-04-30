#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print_adjacents(vector<int> &int_vector) {
  int sum_of_ints;
  std::size_t vector_size = int_vector.size();
  for (std::size_t idx = 0; idx != vector_size; ++idx) {
    sum_of_ints = 0;
    if (idx != 0) {
      sum_of_ints += int_vector[idx - 1];
    }

    sum_of_ints += int_vector[idx];

    if (!(idx + 1 >= vector_size)) {
      sum_of_ints += int_vector[idx + 1];
    }

    cout << "Value of index " << idx << " is: " << sum_of_ints << endl;
  }
}

void print_first_and_last(vector<int> &int_vector) {
  int sum_of_ints;
  std::size_t vector_size = int_vector.size();
  int *ptr_1 = &int_vector[0], *ptr_2 = &int_vector[vector_size - 1];

  for (std::size_t idx = 0; idx != vector_size / 2; ++idx) {
    cout << *ptr_1 + *ptr_2 << endl;
    ptr_1 += 1;
    ptr_2 -= 1;
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