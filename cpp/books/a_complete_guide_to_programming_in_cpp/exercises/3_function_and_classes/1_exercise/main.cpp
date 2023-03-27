#include <cmath>
#include <iostream>
#include <cstdlib>


int main() {
    unsigned int seed;
    std::cin >> seed;

    std::cout << seed << std::endl;

    // srand(seed);
    int z1 = rand();
    int z2 = rand();

    std::cout << z1 << " " << z2 << std::endl;
    return -1;
}