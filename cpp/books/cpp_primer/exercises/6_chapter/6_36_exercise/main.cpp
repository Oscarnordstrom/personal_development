#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

string (*return_ref(string input_str))[10] {
  static string str_arr[10] = {input_str, input_str, input_str, input_str,
                               input_str, input_str, input_str, input_str,
                               input_str, input_str};
  string(*ptr)[10] = &str_arr;
  return ptr;
}

int main() {
  string input_string = "Hey";

  string(*output)[10] = return_ref(input_string);

  for (auto item : *output) {
    cout << item << " ";
  }
  cout << endl;
  return 0;
}
