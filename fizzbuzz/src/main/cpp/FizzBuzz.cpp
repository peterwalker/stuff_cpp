/*
 * FizzBuzz.cpp
 *
 *  Created on: May 23, 2013
 *      Author: localdad
 */

#include <FizzBuzz.h>

FizzBuzz::FizzBuzz() {
	// TODO Auto-generated constructor stub

}
FizzBuzz::~FizzBuzz() {
	// TODO Auto-generated destructor stub
}

std::string FizzBuzz::check(int value) {
	if (value%5==0 && value%3==0) return "FizzBuzz";
	if (value%3==0) return "Fizz";
	if (value%5==0) return "Buzz";
	return "";
}
