#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::shared_ptr;
using std::vector;

typedef shared_ptr<vector<int>> vec_ptr;

vec_ptr init_vec() {
  vec_ptr v = std::make_shared<vector<int>>();
  return v;
}

void fill_vec(std::istream &in, vec_ptr v) {
  int input_val;
  cout << "input: ";
  while (in >> input_val) {
    v->push_back(input_val);
  }
}

void print_vec(vec_ptr v) {
  cout << "printing vector: ";
  for (int &item : *v) {
    cout << item << " ";
  }
  cout << endl;
}

int main() {
  vec_ptr v = init_vec();
  fill_vec(std::cin, v);
  print_vec(v);

  return 0;
}
