#include "TestHarness.h"

// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(question4_test1, CppUnitLite)
{
	const int array_size=10;
	int *array=new int[array_size],i;

	//initialize array
	for(i=0;i<array_size;i++) {
		array[i]=i;
	}
	
	//array[6]=9;

	for(i=0;i<array_size;i++) {
		CHECK_EQUAL(i,array[i]); //array check values
	}

	delete [] array;
}
