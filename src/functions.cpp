#include "include/functions.h"
#include <string>
#include <cstdint>
#include <bitset>
#include <algorithm>

/*
The decimal number, 585 = 1001001001 (binary), is palindromic in both bases.

Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

(Please note that the palindromic number, in either base, may not include leading zeros.)
*/

namespace func {
    void remove_leading_zeros(std::string &num_str) {
        num_str.erase(0, num_str.find_first_not_of('0'));
    }

    bool is_both_palindrome(uint64_t num) {
        std::string num_binary_str = std::bitset<64>(num).to_string();
        remove_leading_zeros(num_binary_str);
        std::string num_binary_str_reversed = num_binary_str;
        std::reverse(num_binary_str_reversed.begin(), num_binary_str_reversed.end());

        std::string num_decimal_str = std::to_string(num);
        std::string num_decimal_str_reversed = num_decimal_str;
        std::reverse(num_decimal_str_reversed.begin(), num_decimal_str_reversed.end());
        
        auto result = (num_binary_str.compare(num_binary_str_reversed) == 0) && (num_decimal_str.compare(num_decimal_str_reversed) == 0);
        return result;
    }
}