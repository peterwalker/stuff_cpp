/*
 * spike.cpp
 *
 *  Created on: May 29, 2013
 *      Author: localdad
 */
#include <iostream>
#include <math.h>
#include "spike.h"

int main(int argc, char* argv[])
{
	int a = 0x0A0B0C0D;
	int b = 0x0D0C0B0A;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << std::hex;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	int B=0;
	int x = a >> 8;
	std::cout << x << std::endl;
	int y = pow(2,16);
	std::cout << y << std::endl;
	B=x*y;
	std::cout << std::hex << B << std::endl;

}
