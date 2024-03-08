#include "question3.h"

int find_gcd(int a, int b) {
    if (a == 0 || b == 0) return -1;
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) gcd = i;
    }
    return gcd > 1 ? gcd : -1;
}

bool test_config() {
    return true;
}
