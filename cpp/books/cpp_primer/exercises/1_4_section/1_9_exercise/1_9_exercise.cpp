#include <iostream>

int main() {

    int index = 50;
    int sum = 0;
    while (index < 100) {
        sum = sum + index;
        ++index;
    }

    std::cout << sum;
}