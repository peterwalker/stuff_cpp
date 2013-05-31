//#include <cppunit/config/SourcePrefix.h>
#include "FizzBuzzTest.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( FizzBuzzTest );
FizzBuzzTest:: FizzBuzzTest()
{
	fb = std::unique_ptr<FizzBuzz>(new FizzBuzz());
}


void 
FizzBuzzTest::testFizzBuzz()
{
	CPPUNIT_ASSERT_EQUAL( std::string("FizzBuzz"), fb->check(15));
	CPPUNIT_ASSERT_EQUAL( std::string("Buzz"), fb->check(5));
	CPPUNIT_ASSERT_EQUAL( std::string("Fizz"), fb->check(3));
}
