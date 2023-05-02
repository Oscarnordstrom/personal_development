#include <iostream>
using std::cout;
using std::endl;

int main() {
  constexpr std::size_t rows = 3, columns = 4;

  int ia[rows][columns] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  for (int(&row)[columns] : ia) {
    for (int q : row) {
      cout << q << " ";
    }
    cout << endl;
  }
  cout << "---------" << endl;
  for (size_t row_idx = 0; row_idx != rows; ++row_idx) {
    for (size_t col_idx = 0; col_idx != columns; ++col_idx) {
      cout << ia[row_idx][col_idx] << " ";
    }
    cout << endl;
  }
  cout << "---------" << endl;

  for (int(*row_ptr)[columns] = ia; row_ptr != ia + rows; ++row_ptr) {
    for (int *col_ptr = (*row_ptr); col_ptr != (*row_ptr) + columns;
         ++col_ptr) {
      cout << *col_ptr << " ";
    }
    cout << endl;
  }
  return 0;
}
