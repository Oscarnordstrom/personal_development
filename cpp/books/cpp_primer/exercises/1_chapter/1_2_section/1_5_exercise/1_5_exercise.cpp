#include <iostream>

int main() {

    int v1, v2;
    std::cout << "Insert your numbers v1 and v2 please" << std::endl;
    std::cin >> v1 >> v2;

    std::cout << "The product of " << v1 << " and " << v2 << " is: ";
    std::cout << v1 * v2;

    return 0;
}