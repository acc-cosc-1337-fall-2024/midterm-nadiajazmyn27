#include <iostream>
#include "question3.h"

int main() {
    int value1, value2, gcd;
    do {
        std::cout << "Enter two integers between 1 and 200 to find their GCD (0 to exit): ";
        std::cin >> value1 >> value2;

        if (value1 == 0 || value2 == 0) {
            break;
        } else if (value1 < 1 || value1 > 200 || value2 < 1 || value2 > 200) {
            std::cout << "Values must be in the range of 1 to 200. Please try again.\n";
            continue;
        }

        gcd = find_gcd(value1, value2);
        if (gcd == -1) {
            std::cout << "There are no common factors.\n";
        } else {
            std::cout << "The GCD of " << value1 << " and " << value2 << " is: " << gcd << std::endl;
        }
    } while (true);

    return 0;
}
