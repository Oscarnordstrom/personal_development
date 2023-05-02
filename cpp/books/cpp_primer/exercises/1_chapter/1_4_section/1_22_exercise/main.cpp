#include <iostream>
#include "Sales_item.h"
#include <stdlib.h>

int main() {
    Sales_item sum_books;
    std::cout << "Insert information for book 1." << std::endl;
    std::cin >> sum_books;

    for (int book_index = 2; book_index <= 4; ++book_index) {
        Sales_item book; 
        std::cout << "Insert information for book " << book_index << "." << std::endl;
        std::cin >> book;

        if (sum_books.isbn() != book.isbn()) {
            std::cout << "The inserted ISBN for the books are different" << std::endl;
            std::exit(EXIT_FAILURE);
        } else {
            sum_books += book;
        }
    }
    std::cout << sum_books << std::endl;
    return 0;
}