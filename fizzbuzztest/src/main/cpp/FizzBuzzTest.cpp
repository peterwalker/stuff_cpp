#include <cppunit/config/SourcePrefix.h>
#include "FizzBuzzTest.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( FizzBuzzTest );
FizzBuzzTest:: FizzBuzzTest()
{
	fb = std::auto_ptr<FizzBuzz>(new FizzBuzz());
}


void 
FizzBuzzTest::testFizzBuzz()
{
	CPPUNIT_ASSERT_EQUAL( fb->check(15), std::string("FizzBuzz"));
}
