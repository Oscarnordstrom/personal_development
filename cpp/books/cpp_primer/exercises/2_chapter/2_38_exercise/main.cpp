// auto ignores the top level const
// decltype includes the top level const and reference

#include <iostream>
int main() {
  int i = 0;

  auto a = i; // a and b will have the same type
  decltype(i) b;

  int &k = i;

  auto c = k;        // c will have type int
  decltype(k) d = i; // d will have type int&

  const int l = 0;
  auto e = l;        // int
  decltype(l) f = l; // const int
}
