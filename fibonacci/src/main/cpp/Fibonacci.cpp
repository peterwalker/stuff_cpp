/*
 * Fibonacci.cpp
 *
 *  Created on: May 26, 2013
 *      Author: localdad
 */
#include "../headers/Fibonacci.h"
#include <iostream>

//**TODO Memoize
int calculateFib(int n) {
	std::cout << "***Fibonacci::calculateFib" << n << std::endl;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return (calculateFib(n - 2) + calculateFib(n - 1));
}

std::list<int> Fibonacci::sequence(int value) {
	std::list<int> result;

	for (int i = 0; i <= value; ++i) {
		result.push_back(calculateFib(i));
	}
	return result;
}
