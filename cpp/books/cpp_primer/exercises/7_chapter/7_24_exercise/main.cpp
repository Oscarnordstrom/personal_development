#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Screen {
public:
  typedef string::size_type position;

  Screen() = default;
  Screen(position ht, position wd, char c = ' ')
      : height(ht), width(wd), contents(ht * wd, c){};

private:
  position cursor = 0;
  position height = 0, width = 0;
  string contents;
};

int main() { return 0; }
