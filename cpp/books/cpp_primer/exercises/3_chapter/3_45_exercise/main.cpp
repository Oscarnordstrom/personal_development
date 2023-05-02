#include <iostream>
using std::cout;
using std::endl;

int main() {
  constexpr std::size_t rows = 3, columns = 4;
  int ia[rows][columns] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
  for (auto &row : ia) {
    for (auto q : row) {
      cout << q << " ";
    }
    cout << endl;
  }
  cout << "---------" << endl;
  for (auto row_idx = 0; row_idx != rows; ++row_idx) {
    for (auto col_idx = 0; col_idx != columns; ++col_idx) {
      cout << ia[row_idx][col_idx] << " ";
    }
    cout << endl;
  }
  cout << "---------" << endl;

  for (auto *row_ptr = ia; row_ptr != ia + rows; ++row_ptr) {
    for (auto *col_ptr = (*row_ptr); col_ptr != (*row_ptr) + columns;
         ++col_ptr) {
      cout << *col_ptr << " ";
    }
    cout << endl;
  }
  return 0;
}
