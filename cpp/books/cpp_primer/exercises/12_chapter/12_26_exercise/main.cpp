#include <iostream>
using std::allocator;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

  int n = 15;
  allocator<string> a;
  auto *p = a.allocate(n);
  string s;
  auto q = p;
  while (cin >> s && q != p + n) {
    a.construct(q++, s);
  }

  const size_t size = q - p;

  while (q != p)
    a.destroy(--q);
  a.deallocate(p, n);

  return 0;
}
