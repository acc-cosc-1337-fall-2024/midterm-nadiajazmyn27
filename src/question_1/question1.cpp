#include "question1.h"

bool test_config()
{
    return true;
}

int get_fib_number(int n) {
    if (n <= 1) {
        return n;
    }
    int previous = 0, current = 1, next = 0;
    for (int i = 2; i <= n; ++i) {
        next = previous + current;
        previous = current;
        current = next;
    }
    return current;
}