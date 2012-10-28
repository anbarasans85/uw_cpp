#include "TestHarness.h"
#include "swap.h"
// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(question1_test1, swap_ptr_test)
{
	int n1=10,n2=20;

	swap_ptr(&n1,&n2);
	
	CHECK_EQUAL(20,n1);
	CHECK_EQUAL(10,n2);
}
TEST(question1_test2, swap_ref_test)
{
	int n1=10,n2=20;

	swap_ref(n1,n2);
	
	CHECK_EQUAL(20,n1);
	CHECK_EQUAL(10,n2);
}
