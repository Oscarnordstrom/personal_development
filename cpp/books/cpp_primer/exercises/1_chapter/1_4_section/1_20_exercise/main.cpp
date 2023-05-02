#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book;
    for (int book_index = 1; book_index <= 3; ++book_index) {
        std::cout << "Insert information for book " << book_index << "." << std::endl;
        std::cin >> book;
        std::cout << book << std::endl;
    }
    
    return 0;
}