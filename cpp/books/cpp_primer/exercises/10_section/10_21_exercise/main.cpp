#include <iostream>
using std::cout;
using std::endl;

int main() {

  int local_var = 10;
  auto decrementor = [&local_var]() {
    local_var--;
    return (local_var > 0 ? true : false);
  };

  while (decrementor()) {
    cout << local_var << endl;
  }
  return 0;
}
