#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

typedef int (*function_ptr)(int val1, int val2);

int add(int val1, int val2) { return val1 + val2; }
int subtract(int val1, int val2) { return val1 - val2; }
int multiply(int val1, int val2) { return val1 * val2; }
int divide(int val1, int val2) { return val1 / val2; }

int main() {
  vector<function_ptr> function_vector{add, subtract, multiply, divide};

  return 0;
}
