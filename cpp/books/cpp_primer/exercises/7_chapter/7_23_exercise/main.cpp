#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Screen {
public:
  typedef string::size_type position;
private:
  position cursor = 0;
  position height = 0, width = 0;
  string contents;
};

int main() { return 0; }
