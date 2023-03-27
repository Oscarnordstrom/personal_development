#include <iostream>

int main() {
    int var1, var2;
    std::cin >> var1 >> var2;
    
    // Swap var1 and var2 without temporary variable because why not
    if (var1 > var2) {
        var1 += var2;
        var2 = var1 - var2;
        var1 -= var2;
    }

    while (var1 <= var2) {
        std::cout << var1 << std::endl;
        ++var1;
    };

    return 0;
}