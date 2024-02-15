#include "include/functions.h"
#include <string>
#include <cstdint>
#include <bitset>
#include <algorithm>

namespace func {
    void remove_leading_zeros(std::string &num_str) {
        num_str.erase(0, num_str.find_first_not_of('0'));
    }

    bool is_decimal_palindrome(uint64_t num) {
        std::string num_decimal_str = std::to_string(num);
        std::string num_decimal_str_reversed = num_decimal_str;
        std::reverse(num_decimal_str_reversed.begin(), num_decimal_str_reversed.end());
        return num_decimal_str.compare(num_decimal_str_reversed) == 0;
    }

    bool is_binary_palindrome(uint64_t num) {
        std::string num_binary_str = std::bitset<64>(num).to_string();
        remove_leading_zeros(num_binary_str);
        std::string num_binary_str_reversed = num_binary_str;
        std::reverse(num_binary_str_reversed.begin(), num_binary_str_reversed.end());
        return num_binary_str.compare(num_binary_str_reversed) == 0;
    }

    uint64_t bin_dec_palindrome_sum(uint64_t upper_limit) {
        uint64_t sum = 0;
        for (uint64_t i = 1; i < upper_limit; i+=2) {
            if (is_decimal_palindrome(i)) {
                if (is_binary_palindrome(i)) {
                    sum += i;
                }
            }
        }
        return sum;
    }
}