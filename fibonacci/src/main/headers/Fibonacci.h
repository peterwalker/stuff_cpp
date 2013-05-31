/*
 * Fibonacci.h
 *
 *  Created on: May 26, 2013
 *      Author: localdad
 */

#ifndef FIBONACCI_H_
#define FIBONACCI_H_
#include <list>
#include <map>

class Fibonacci {
private:
	static std::map<int, int> cachedSequence;
	int calculateFib(int n);
public:
	Fibonacci();
	std::list<int> sequence(int value);
};

#endif /* FIBONACCI_H_ */
