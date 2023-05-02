#include <iostream>
using std::cout;
using std::endl;

int main() {
  constexpr std::size_t rows = 3, columns = 4;
  using m_row = int[columns];
  int ia[rows][columns] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
  for (m_row &row : ia) {
    for (int q : row) {
      cout << q << " ";
    }
    cout << endl;
  }
  cout << "---------" << endl;
  using ptr_size = size_t;
  for (ptr_size row_idx = 0; row_idx != rows; ++row_idx) {
    for (ptr_size col_idx = 0; col_idx != columns; ++col_idx) {
      cout << ia[row_idx][col_idx] << " ";
    }
    cout << endl;
  }
  cout << "---------" << endl;

  using int_row = int[columns];
  for (int_row *row_ptr = ia; row_ptr != ia + rows; ++row_ptr) {
    for (int *col_ptr = (*row_ptr); col_ptr != (*row_ptr) + columns;
         ++col_ptr) {
      cout << *col_ptr << " ";
    }
    cout << endl;
  }
  return 0;
}
