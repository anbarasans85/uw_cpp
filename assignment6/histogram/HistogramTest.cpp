#include "TestHarness.h"
#include "Histogram.h"

// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(CharTest, Histogram)
{
    Histogram h1;

    parseAdd(h1,"This is $123# test. Another @567% test!");

    CHECK_EQUAL(21,h1.GetChars());
}
TEST(NumberTest, Histogram)
{
    Histogram h1;

    parseAdd(h1,"This is $123# test. Another @567% test!");

    CHECK_EQUAL(6,h1.GetNumbers());
}
TEST(PunctsTest, Histogram)
{
    Histogram h1;

    parseAdd(h1,"This is $123# test. Another @567% test!");

    CHECK_EQUAL(6,h1.GetPuncts());
}
TEST(SpaceTest, Histogram)
{
    Histogram h1;

    parseAdd(h1,"This is $123# test. Another @567% test!");

    CHECK_EQUAL(6,h1.GetSpaces());
}
TEST(PrintTest, Histogram)
{
    /* dummy test case to demonstrate file reading and operator
    overloading */
    file_count();
}
