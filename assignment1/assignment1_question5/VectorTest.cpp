#include "TestHarness.h"

// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(question5_test1, CppUnitLite)
{
	std::vector<int> n1;
	const int number_size=10;
	int i;

	for(i=0;i<number_size;i++) {
		n1.push_back(i);
	}

	//n1.erase(n1.begin()+9); //remove the 10th element

	CHECK_EQUAL(number_size,n1.size()); //check current vector size

	for(i=0;i<number_size;i++) {
		CHECK_EQUAL(i,n1[i]); //check vector values
	}
}
