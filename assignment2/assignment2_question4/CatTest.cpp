#include "TestHarness.h"
#include "cat.h"
// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(question4_test1, cat_fun_c)
{
	char s1[]="Test";
	char s2[]="ing";
	char expected[]="Testing";
	char *s3=NULL;

	s3=cat_fun_c(s1,s2);
	
	CHECK_EQUAL(expected,s3);
}
TEST(question4_test2, cat_fun_cpp)
{
	std::string s1="Test";
	std::string s2="ing";
	std::string expected="Testing";
	std::string s3;

	s3=cat_fun_cpp(s1,s2);
	
	CHECK_EQUAL(expected,s3);
}
