#include <iostream>

int main() {
    int num1 = 0, num2 = 0;
    std::cout << "Enter two number" << std::endl;
    std::cin  >> num1 >> num2;
    if (num1 >= num2) {
        num1 += num2;
        num2 = num1 - num2;
        num1 -= num2;
    }
    int temp = num1+1;
    while(temp < num2) {
        std::cout << temp++ << std::endl;
    }
    return 0;
}