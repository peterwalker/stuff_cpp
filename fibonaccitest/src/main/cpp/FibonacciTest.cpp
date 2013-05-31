#include <list>
#include <iostream>
#include <cppunit/config/SourcePrefix.h>
#include <cppunit/TestAssert.h>
#include "FibonacciTest.h"

CPPUNIT_NS_BEGIN
template<>
struct assertion_traits<std::list<int> > {
	static bool equal(const std::list<int>& x, const std::list<int>& y) {
		return x == y;
	}
	static std::string toString(const std::list<int>& x) {
		std::ostringstream o;
		for (std::list<int>::const_iterator it = x.begin(); it != x.end();
				++it) {
			o << *it << ":";
		}
		return o.str();
	}
};
CPPUNIT_NS_END

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(FibonacciTest);

FibonacciTest::FibonacciTest() {
	sut = std::unique_ptr<Fibonacci>(new Fibonacci());
}

void FibonacciTest::testFibonacci0() {
	std::list<int> expected;
	expected.push_back(0);
	CPPUNIT_ASSERT_EQUAL(expected, sut->sequence(0));
}

void FibonacciTest::testFibonacci1() {
	std::list<int> expected;
	expected.push_back(0);
	expected.push_back(1);
	CPPUNIT_ASSERT_EQUAL(expected, sut->sequence(1));
}

void FibonacciTest::testFibonacci2() {
	std::list<int> expected;
	expected.push_back(0);
	expected.push_back(1);
	expected.push_back(1);
	CPPUNIT_ASSERT_EQUAL(expected, sut->sequence(2));
}

void FibonacciTest::testFibonacci3() {
	std::list<int> expected;
	expected.push_back(0);
	expected.push_back(1);
	expected.push_back(1);
	expected.push_back(2);
	CPPUNIT_ASSERT_EQUAL(expected, sut->sequence(3));
}

void FibonacciTest::testFibonacci4() {
	std::list<int> expected;
	expected.push_back(0);
	expected.push_back(1);
	expected.push_back(1);
	expected.push_back(2);
	expected.push_back(3);
	CPPUNIT_ASSERT_EQUAL(expected, sut->sequence(4));
}
