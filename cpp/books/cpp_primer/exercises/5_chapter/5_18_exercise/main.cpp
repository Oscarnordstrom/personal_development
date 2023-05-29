#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int get_response() { return 5; }

int main() {

  // No brackets around do statement.
  do {

    int v1, v2;
    cout << "Please enter two numbers to sum:";
    if (cin >> v1 >> v2)
      cout << "Sum is: " << v1 + v2 << endl;
  } while (cin);

  // Not allowed to declare variable inside while loop condition scope.
  //   do {
  //   } while (int ival = get_response());

  // Not allowed to declare variables inside do while scope.
  //   do {
  //     int ival = get_response();
  //   } while (ival);

  return 0;
}
