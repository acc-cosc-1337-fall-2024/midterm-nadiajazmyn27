#include "question2.h"

std::string decimal_to_hex(int decimal) {
    std::string hexStr;
    while (decimal > 0) {
        int rem = decimal % 16;
        if (rem < 10) {
            hexStr = char(rem + '0') + hexStr;
        } else {
            hexStr = char(rem - 10 + 'A') + hexStr;
        }
        decimal = decimal / 16;
    }
    return hexStr.empty() ? "0" : hexStr;
}
bool test_config()
{
    return true;
}

