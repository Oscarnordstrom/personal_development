// Function takes an array of length 10.
// If you input less or more than 10 elements there will be UB.
// Change into reference of an array instead.
// When you use `ia[10]` it will take an input of type `int *`
// Which does not contain information about the length of the array.

#include <iostream>
using std::cout;
using std::endl;
void print(const int (&ia)[10]) {

  for (size_t i = 0; i != 10; ++i)
    cout << ia[i] << endl;
}
int main(

) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  print(arr);
  return 0;
}
