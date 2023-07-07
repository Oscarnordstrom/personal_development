#include <iostream>
#include <string>;
using std::cout;
using std::endl;
using std::string;

void a() {
  char c1[] = "Test";
  char c2[] = "Testing";

  size_t c1_size = strlen(c1);
  size_t c2_size = strlen(c2);
  size_t total_size = c1_size + c2_size;

  char c_combined[total_size];

  for (size_t iter = 0; iter < c1_size; iter++) {
    c_combined[iter] = c1[iter];
  }

  for (size_t iter = 0; iter < c2_size; iter++) {
    c_combined[(c1_size) + iter] = c2[iter];
  }

  for (size_t iter = 0; iter < total_size; iter++) {
    cout << c_combined[iter] << " ";
  }
  cout << endl;
}
void b() {
  string str1 = "Test";
  string str2 = "Testing";

  string str_combined = str1 + str2;

  for (char &item : str_combined) {
    cout << item << " ";
  }

  cout << endl;
}

int main() {
  a();
  b();
  return 0;
}
