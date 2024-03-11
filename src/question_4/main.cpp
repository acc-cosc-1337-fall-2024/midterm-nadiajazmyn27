#include "question4.h"
#include <iostream>
#include <vector>

int main() {
    std::cout << "Cookie Ingredient Calculator\n";
    std::cout << "Enter the number of cookies you want to bake (or -1 to quit): ";

    int cookies;
    while (std::cin >> cookies && cookies != -1) {
        if (cookies < 0) {
            std::cout << "Please enter a valid number of cookies or -1 to quit.\n";
            continue;
        }

        std::vector<double> ingredients = get_cookie_ingredients(cookies);

        std::cout << "To bake " << cookies << " cookies, you need:\n";
        std::cout << "- Sugar: " << ingredients[0] << " cups\n";
        std::cout << "- Butter: " << ingredients[1] << " cups\n";
        std::cout << "- Flour: " << ingredients[2] << " cups\n";

        std::cout << "Enter the number of cookies you want to bake (or -1 to quit): ";
    }

    return 0;
}
