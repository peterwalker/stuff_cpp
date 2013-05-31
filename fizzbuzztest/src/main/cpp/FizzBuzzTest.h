// FizzBuzzTest.h
#ifndef FizzBuzzTEST_H
#define FizzBuzzTEST_H

#include <FizzBuzz.h>

#include <cppunit/extensions/HelperMacros.h>
#include <memory>

class FizzBuzzTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( FizzBuzzTest );
  CPPUNIT_TEST( testFizzBuzz );
  CPPUNIT_TEST_SUITE_END();
  std::unique_ptr<FizzBuzz> fb;
  public:
  FizzBuzzTest();
  void testFizzBuzz();
};

#endif  // FizzBuzzTEST_H
