#include "include/functions.h"
#include <iostream>
#include <string>

/*
The decimal number, 585 = 1001001001 (binary), is palindromic in both bases.

Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

(Please note that the palindromic number, in either base, may not include leading zeros.)
*/

int main() {
    /* std::string test_num_str = "0000001001";
    func::remove_leading_zeros(test_num_str);
    std::cout << "Result: " << test_num_str << '\n'; */
    std::cout << "Are both forms palindromes?: " << std::boolalpha << func::is_both_palindrome(588) << '\n';

    return 0;
}