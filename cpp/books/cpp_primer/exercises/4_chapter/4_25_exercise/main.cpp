#include <bitset>
#include <iostream>
using std::cout;
using std::endl;

int main() {

  cout << (~'q' << 6) << endl;

  long int test = -7296;

  std::bitset<32> x(test);

  cout << x << endl;
  return 0;
}

// q gets promoted to a long int 32 bits
// therefore the int will get the value
// 11111111 11111111 11100011 1000000