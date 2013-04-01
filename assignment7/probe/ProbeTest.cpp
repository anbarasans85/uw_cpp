#include "TestHarness.h"
#include "SimpleClass1.h"
// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested

TEST(SimpleClass1,Test1)
{
    SimpleClass1 a;
    SimpleClass1 b;
    SimpleClass1 c;
    
    CHECK_EQUAL(2,b.GetCount()); //Will fail. Correct value is 3.
}
