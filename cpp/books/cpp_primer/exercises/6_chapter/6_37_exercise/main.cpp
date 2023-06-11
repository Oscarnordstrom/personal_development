#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

typedef string (*string_arr)[10];
string (*string_arr_decltype)[10];

decltype(string_arr_decltype) return_ref_1(string input_str) {
  static string str_arr[10] = {input_str, input_str, input_str, input_str,
                               input_str, input_str, input_str, input_str,
                               input_str, input_str};
  string(*ptr)[10] = &str_arr;
  return ptr;
}

string_arr return_ref_2(string input_str) {
  static string str_arr[10] = {input_str, input_str, input_str, input_str,
                               input_str, input_str, input_str, input_str,
                               input_str, input_str};
  string(*ptr)[10] = &str_arr;
  return ptr;
}

auto return_ref_3(string input_str) -> string (*)[10] {
  static string str_arr[10] = {input_str, input_str, input_str, input_str,
                               input_str, input_str, input_str, input_str,
                               input_str, input_str};
  string(*ptr)[10] = &str_arr;
  return ptr;
}

int main() {
  string input_string = "Hey";

  string(*output)[10] = return_ref_1(input_string);

  string_arr output_2 = return_ref_2(input_string);

  string_arr output_3 = return_ref_3(input_string);

  for (auto item : *output) {
    cout << item << " ";
  }
  cout << endl;
  for (auto item : *output_2) {
    cout << item << " ";
  }
  cout << endl;

  for (auto item : *output_3) {
    cout << item << " ";
  }
  cout << endl;

  return 0;
}
