#include <iostream>
#include "question2.h"

int main() {
    while (true) {
        std::cout << "Enter an integer value between 1 and 512 to convert to hexadecimal (0 to exit): ";
        int decimal;
        std::cin >> decimal;

        if (decimal == 0) {
            break;
        } else if (decimal < 1 || decimal > 512) {
            std::cout << "Number out of range. Please try again.\n";
            continue;
        }

        std::string hexValue = decimal_to_hex(decimal);
        std::cout << "Hexadecimal value: " << hexValue << std::endl;
    }

    return 0;
}
