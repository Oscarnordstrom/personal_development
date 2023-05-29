#include <iostream>
using std::cout;
using std::endl;

int main() { return 0; }

// (a) Incorrect. f has return type int while it returns a string.
// int f() {
// string s;
// return s;
// }

// (b) Incorrect. Needs to be return type void if it does not return anything.
void f2(int i) {}

// (c) Incorrect. It is not possible to declare two variables of the same name.
// int calc(int v1, int v1) {}

// (d) Incorrect. Missing brackets.
double square(double x) {return x * x;}