#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1;
    std::cin >> item1;
    for(Sales_item item2;std::cin >> item2;)
        if (item2.isbn == item1.isbn) {
            item1 += item2;
            std::cout << item1 << std::endl;
        }
        else {
            std::cout << "Different isbn" << std::endl;
            return -1;
        }
}
