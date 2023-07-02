#include <iostream>
#include <list>
using std::cout;
using std::endl;
using std::list;

int main() {
  list<int> lst1{1, 2, 3, 4, 5};
  list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
  while (iter1 != iter2) {
    cout << iter1.operator*() << endl;
    iter1++;
  }
  return 0;
}
