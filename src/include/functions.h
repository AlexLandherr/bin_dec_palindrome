#include <string>
#include <cstdint>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace func {
    void remove_leading_zeros(std::string &num_str);
    bool is_both_palindrome(uint64_t num);
}

#endif