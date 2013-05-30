/*
 * Fibonacci.cpp
 *
 *  Created on: May 26, 2013
 *      Author: localdad
 */
#include "../headers/Fibonacci.h"
#include <iostream>

std::map<int, int> Fibonacci::cachedSequence;

Fibonacci::Fibonacci() {
	cachedSequence[0] = 0;
	cachedSequence[1] = 1;
}

int Fibonacci::calculateFib(int n) {
	std::map<int, int>::const_iterator it = cachedSequence.find(n);
	//auto it = cachedSequence.find(n);
	if (it != cachedSequence.end()) {
		return (*it).second;
	}
	int value = (calculateFib(n - 2) + calculateFib(n - 1));
	cachedSequence[n] = value;
	return value;
}

std::list<int> Fibonacci::sequence(int value) {
	std::list<int> result;
	for (int i = 0; i <= value; ++i) {
		result.push_back(calculateFib(i));
	}
	return result;
}
