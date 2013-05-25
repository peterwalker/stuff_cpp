#include <cppunit/config/SourcePrefix.h>
#include "PalindromeTest.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( PalindromeTest );

PalindromeTest:: PalindromeTest()
{
	sut = std::auto_ptr<Palindrome>(new Palindrome());
}

void 
PalindromeTest::testPalindrome()
{
	CPPUNIT_ASSERT_EQUAL_MESSAGE( "madam", true, sut->isPalindrome("madam"));
	CPPUNIT_ASSERT_EQUAL_MESSAGE( "Able was I ere I saw Elba", true, sut->isPalindrome("Able was I ere I saw Elba"));
	CPPUNIT_ASSERT_EQUAL_MESSAGE( "foobar", false, sut->isPalindrome("foobar"));
}
