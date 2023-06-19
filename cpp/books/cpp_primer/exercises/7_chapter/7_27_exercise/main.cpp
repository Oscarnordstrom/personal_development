#include <iostream>
#include <numeric>
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

  Screen &move(position new_ht, position new_wd) {
    do_move(new_ht, new_wd);
    return *this;
  }

  Screen &set(char new_character) {
    do_set(new_character);
    return *this;
  }

  Screen &display(std::ostream &os) {
    do_display(os);
    return *this;
  }

private:
  position cursor = 0;
  position height = 0, width = 0;
  string contents;

  void do_move(position new_ht, position new_wd) {
    this->cursor = (new_wd * this->height + new_ht) - 1;
  };

  void do_set(char c) { this->contents[this->cursor] = c; };

  void do_display(std::ostream &os) {
    for (position height_index = 0; height_index < this->height;
         height_index++) {
      for (position width_index = 0; width_index < this->width; width_index++) {
        position content_index = height_index * this->width + width_index;
        os << this->contents[content_index] << " ";
      }
      os << endl;
    }
  }
};

int main() {
  Screen myScreen(5, 5, 'X');
  myScreen.move(4, 0).set('#').display(cout);
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";
  return 0;
}