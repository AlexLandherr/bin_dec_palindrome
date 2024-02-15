#include <string>
#include <cstdint>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace func {
    void remove_leading_zeros(std::string &num_str);
    bool is_decimal_palindrome(uint64_t num);
    bool is_binary_palindrome(uint64_t num);
    uint64_t bin_dec_palindrome_sum(uint64_t upper_limit);
}

#endif