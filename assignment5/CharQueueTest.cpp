#include "TestHarness.h"
#include "CharQueue1.h"
// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested

TEST(CharQueue1, QueueTest1)
{	
    std::stringstream expected_str,actual_str;

    CharQueue1 q;

    q.enqueue('a');
    q.enqueue('e');
    q.enqueue('i');
    q.enqueue('o');
    q.enqueue('u');

    expected_str << 'a';
    actual_str << q.dequeue();
	CHECK_EQUAL(expected_str.str(),actual_str.str());
    expected_str.str("");
    actual_str.str("");

    expected_str << 'e';
    actual_str << q.dequeue();
	CHECK_EQUAL(expected_str.str(),actual_str.str());
    expected_str.str("");
    actual_str.str("");

    expected_str << 'i';
    actual_str << q.dequeue();
	CHECK_EQUAL(expected_str.str(),actual_str.str());
    expected_str.str("");
    actual_str.str("");

    expected_str << 'o';
    actual_str << q.dequeue();
	CHECK_EQUAL(expected_str.str(),actual_str.str());
    expected_str.str("");
    actual_str.str("");

    expected_str << 'u';
    actual_str << q.dequeue();
	CHECK_EQUAL(expected_str.str(),actual_str.str());
    expected_str.str("");
    actual_str.str("");

}
