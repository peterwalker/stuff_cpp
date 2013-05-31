/*
 * Palindrome.cpp
 *
 *  Created on: May 25, 2013
 *      Author: localdad
 */

#include "../headers/Palindrome.h"

bool iequals(const std::string& a, const std::string& b)
{
    auto sz = a.size();
    if (b.size() != sz)
        return false;
    for (unsigned int i = 0; i < sz; ++i)
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    return true;
}

bool Palindrome::isPalindrome(const std::string& phrase){
	std::string reversedString(phrase.rbegin(), phrase.rend());
	return iequals(phrase,reversedString);
}

