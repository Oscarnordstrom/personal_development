// Not legal. The vector is not initialized, therefore subscripting does not
// work as element 0 does not exist.
#include <vector>

using std::vector;

int main() {
  vector<int> ivec = {0};
  ivec[0] = 42;
}