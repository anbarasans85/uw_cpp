#include "TestHarness.h"
#include "probe.h"
// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested

unsigned int SimpleClass::object_count=0;
unsigned int SimpleClass::SimpleFunction1_count=0;
unsigned int SimpleClass::SimpleFunction2_count=0;

TEST(SimpleClass,Test1)
{
    SimpleClass a;
    SimpleClass b(4);
    SimpleClass c(4,'c');
    SimpleClass d(a);
    SimpleClass e;
    
    CHECK_EQUAL(5,e.probe_object_count());
}
{
    unsigned int temp;
    temp=function1();
    temp=function2();
    temp=function1();
    CHECK_EQUAL(3,function1());
    CHECK_EQUAL(2,function2());
}
