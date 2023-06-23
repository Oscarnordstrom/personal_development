#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

typedef string Type;
Type initVal();

class Exercise {
public:
  typedef double Type;
  Type setVal(Type);
  Type initVal();

private:
  int val;
};
Exercise::Type Exercise::setVal(Exercise::Type parm) {
  val = parm + initVal();
  return val;
}

int main() { return 0; }
