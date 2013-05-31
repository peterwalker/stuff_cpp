// FibonacciTest.h
#ifndef FibonacciTEST_H
#define FibonacciTEST_H

#include <Fibonacci.h>

#include <cppunit/extensions/HelperMacros.h>
#include <memory>

class FibonacciTest: public CPPUNIT_NS::TestFixture {
CPPUNIT_TEST_SUITE( FibonacciTest );
	CPPUNIT_TEST(testFibonacci0);
	CPPUNIT_TEST(testFibonacci1);
	CPPUNIT_TEST(testFibonacci2);
	CPPUNIT_TEST(testFibonacci3);
	CPPUNIT_TEST(testFibonacci4);
CPPUNIT_TEST_SUITE_END();
	std::unique_ptr<Fibonacci> sut;

public:
	FibonacciTest();
	void testFibonacci0();
	void testFibonacci1();
	void testFibonacci2();
	void testFibonacci3();
	void testFibonacci4();
};

#endif  // FibonacciTEST_H
