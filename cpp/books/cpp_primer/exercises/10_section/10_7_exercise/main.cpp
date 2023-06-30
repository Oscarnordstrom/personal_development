#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::vector;

void a() {
  list<int> lst;
  int i;
  while (cin >> i)
    lst.push_back(i);

  vector<int> vec(lst.size(), 0);
  copy(lst.cbegin(), lst.cend(), vec.begin());

  for (int item : vec) {
    cout << item << " ";
  }
  cout << endl;
}

void b() {
  vector<int> vec;
  vec.resize(10);
  fill_n(vec.begin(), 10, 0);
  for (int item : vec) {
    cout << item << " ";
  }
  cout << endl;
}

int main() {
  a();
  b();

  return 0;
}
