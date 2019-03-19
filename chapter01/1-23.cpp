#include <iostream>
#include <map>
#include <string>
#include "Sales_item.h"

int main() {
    std::map<std::string, Sales_item> dict;
    std::map<std::string, Sales_item>::iterator iter;
    Sales_item item1;
    std::cin >> item1;
    dict[item1.isbn] = item1;
    for(Sales_item item2;std::cin >> item2;) {
        if (std::cin.get() == ' ' ) {
            break;
        }
        if (dict.find(item2.isbn) != dict.end()) {
            dict[item2.isbn] += item2;
            std::cout << dict[item2.isbn] << std::endl;
        } else {
            dict[item2.isbn] = item2;
            std::cout << dict[item2.isbn] << std::endl;
        }
    }
    iter = dict.begin();
    while(iter != dict.end()) {
        std::cout << iter->second << std::endl;
        iter++;
    }
}
