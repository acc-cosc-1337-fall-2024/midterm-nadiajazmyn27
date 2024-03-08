#include <iostream>
#include "question1.h"

int main() {
    int number;
    do {
        std::cout << "Enter a number between 1 and 15 to get its Fibonacci value (or -1 to exit): ";
        std::cin >> number;
        
        if (number == -1) {
            break;
        } else if (number < 1 || number > 15) {
            std::cout << "Number out of range. Please try again.\n";
            continue;
        }
        
        std::cout << "The Fibonacci number is: " << get_fib_number(number) << std::endl;
    } while (number != -1);

    return 0;
}