#include <iostream>
using std::cout;
using std::endl;
using std::unique_ptr;

int main() {
  unique_ptr<int> c(new int(10));

  //   unique_ptr<int> p(c); // Does not work ` error: call to
  //   implicitly-deleted copy constructor of 'unique_ptr<int>'`
  unique_ptr<int> p(c.release());

  unique_ptr<int> q;
  //   q = p; //  error: object of type 'unique_ptr<int>' cannot be assigned
  //   because its copy assignment operator is implicitly deleted

  return 0;
}
