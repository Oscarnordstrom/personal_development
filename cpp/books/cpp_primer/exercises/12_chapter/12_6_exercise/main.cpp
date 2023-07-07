#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

typedef vector<int> *dyn_vec;

dyn_vec init_vec() {
  dyn_vec v = new vector<int>;
  return v;
}

void fill_vec(std::istream &in, dyn_vec v) {
  int input_val;
  cout << "input: ";
  while (in >> input_val) {
    v->push_back(input_val);
  }
}

void print_vec(dyn_vec v) {
  cout << "printing vector: ";
  for (int &item : *v) {
    cout << item << " ";
  }
  cout << endl;
}

void clean_up_vec(dyn_vec &v) {
  delete v;
  v = nullptr;
}

int main() {
  dyn_vec v = init_vec();
  fill_vec(std::cin, v);
  print_vec(v);
  clean_up_vec(v);

  return 0;
}