// PalindromeTest.h
#ifndef PalindromeTEST_H
#define PalindromeTEST_H

#include <Palindrome.h>

#include <cppunit/extensions/HelperMacros.h>
#include <memory>

class PalindromeTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( PalindromeTest );
  CPPUNIT_TEST( testPalindrome );
  CPPUNIT_TEST_SUITE_END();
  std::auto_ptr<Palindrome> sut;
  public:
  PalindromeTest();
  void testPalindrome();
};

#endif  // PalindromeTEST_H
