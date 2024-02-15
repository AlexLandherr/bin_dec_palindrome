#include "include/functions.h"
#include <iostream>
#include <string>
#include <cstdint>

/*
The decimal number, 585 = 1001001001 (binary), is palindromic in both bases.

Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

(Please note that the palindromic number, in either base, may not include leading zeros.)
*/

int main() {
    /* std::string test_num_str = "0000001001";
    func::remove_leading_zeros(test_num_str);
    std::cout << "Result: " << test_num_str << '\n';
    uint64_t num = 585;
    std::cout << "Is the decimal form of 'num' a palindrome?: " << std::boolalpha << func::is_decimal_palindrome(num) << '\n';
    std::cout << "Is the binary form of 'num' a palindrome?: " << std::boolalpha << func::is_binary_palindrome(num) << '\n'; */
    uint64_t upper_limit = 1000000;
    std::cout << "The sum of all palindromic numbers less than 1e6 in base 10 and base 2 is: " << '\n';
    std::cout << func::bin_dec_palindrome_sum(upper_limit) << '\n';

    return 0;
}