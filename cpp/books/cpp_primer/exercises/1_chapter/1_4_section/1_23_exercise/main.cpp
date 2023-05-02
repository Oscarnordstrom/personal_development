#include <iostream>
#include "Sales_item.h"
int main() {
    Sales_item current_book, book;
    std::cout << "Book nr: 1" << std::endl;
    std::cin >> current_book;

    int count = 1;
    while (std::cin >> book) {
        if (book.isbn() == current_book.isbn()) {
            count += 1;
        } else {
            std::cout << "Count: " << count << std::endl;
            current_book = book;
        }
    }
}