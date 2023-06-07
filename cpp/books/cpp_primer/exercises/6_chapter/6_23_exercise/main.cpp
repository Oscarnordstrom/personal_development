#include <iostream>
#include <span>
using std::cout;
using std::endl;
using std::span;

void print(span<int> buffer) {
  for (auto element : buffer) {
    cout << element << endl;
  }
}

int main() {
  int arr[] = {1, 2, 3};

  print(arr);

  return 0;
}
