#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;

typedef int (*function_ptr)(int val1, int val2);

int sum(int val1, int val2) {
	return val1 + val2;
}

int main() {

	vector<function_ptr> function_vector;

	return 0;
}
