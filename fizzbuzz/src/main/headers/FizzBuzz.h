/*
 * FizzBuzz.h
 *
 *  Created on: May 23, 2013
 *      Author: localdad
 */

#ifndef FIZZBUZZ_H_
#define FIZZBUZZ_H_
#include <string>

class FizzBuzz {
public:
	FizzBuzz();
	virtual ~FizzBuzz();
	std::string check(int value) const;
};

#endif /* FIZZBUZZ_H_ */
