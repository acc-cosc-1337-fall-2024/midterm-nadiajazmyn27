#include "question4.h"

std::vector<double> get_cookie_ingredients(int cookies) {
    
    const double sugar_per_48_cookies = 1.5;
    const double butter_per_48_cookies = 1.0;
    const double flour_per_48_cookies = 2.75;

    
    double ratio = cookies / 48.0;

    
    std::vector<double> ingredients = {
        sugar_per_48_cookies * ratio,
        butter_per_48_cookies * ratio,
        flour_per_48_cookies * ratio
    };

    return ingredients;
}

bool test_config() {
  
    return true;
}