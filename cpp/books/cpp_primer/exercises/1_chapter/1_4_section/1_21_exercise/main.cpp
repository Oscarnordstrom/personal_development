#include <iostream>
#include "Sales_item.h"
#include <stdlib.h>

int main() {
    Sales_item book_1, book_2, sum_books;
    std::cout << "Insert information for book 1." << std::endl;
    std::cin >> book_1;
    
    std::cout << "Insert information for book 2." << std::endl;
    std::cin >> book_2;

    if (book_1.isbn() != book_2.isbn()) {
        std::cout << "The inserted ISBN for the books are different" << std::endl;
        std::exit(EXIT_FAILURE);
    }

    sum_books = book_1 + book_2;

    std::cout << sum_books << std::endl;

    std::cout << sum_books.isbn() << std::endl;

    return 0;
}