#include "TestHarness.h"
#include "write.h"
// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested

TEST(question2_test1, string_int_test)
{
    std::string expected="1234";
    std::stringstream actual("");
    write(actual,1234);
    CHECK_EQUAL(expected,actual.str());
}
TEST(question2_test2, string_float_test)
{
    std::string expected="1234.56";
    std::stringstream actual("");
    write(actual,(float)1234.56);
    CHECK_EQUAL(expected,actual.str());
}
TEST(question2_test3, string_string_test)
{
    std::string expected="TestTest";
    std::stringstream actual("");
    write(actual,"TestTest");
    CHECK_EQUAL(expected,actual.str());
}
TEST(question2_test4, cout_string_test)
{
    cout_write();
}
