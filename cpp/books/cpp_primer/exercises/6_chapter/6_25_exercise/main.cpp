#include <iostream>
#include <span>
using std::cout;
using std::endl;
using std::span;

void print_arguments(span<char *> input_arguments) {
  for (auto item : input_arguments) {
    cout << item << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {

  std::span<char *> argspan(argv, argc);
  print_arguments(argspan);

  return 0;
}
