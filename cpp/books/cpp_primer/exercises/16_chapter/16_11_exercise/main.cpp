#include <iostream>
using std::cout;
using std::endl;

template <typename elemType> class ListItem {
public:
  elemType value;
  ListItem<elemType> *next;

  ListItem(elemType val, ListItem<elemType> *nxt = nullptr)
      : value(val), next(nxt) {}
};

template <typename elemType> class List {
public:
  List<elemType>();
  List<elemType>(const List<elemType> &);
  List<elemType> &operator=(const List<elemType> &);
  ~List();
  void insert(ListItem *ptr, elemType value);

private:
  ListItem *front, *end;
};

int main() { return 0; }
