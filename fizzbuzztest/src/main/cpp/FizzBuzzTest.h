// FizzBuzzTest.h
#ifndef FizzBuzzTEST_H
#define FizzBuzzTEST_H

#include <cppunit/extensions/HelperMacros.h>

class FizzBuzzTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( FizzBuzzTest );
  CPPUNIT_TEST( testFizzBuzz );
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void testFizzBuzz();
};

#endif  // FizzBuzzTEST_H
