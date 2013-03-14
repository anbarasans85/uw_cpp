#include "TestHarness.h"
#include "CharQueue.h"
// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested

CharQueue cqueue;

TEST(CharQueue, QueueTest1)
{	
    std::stringstream expected_str,actual_str;
    
    cqueue.cq_enqueue('a');

    expected_str << 'a';
    actual_str << cqueue.cq_dequeue();
	CHECK_EQUAL(expected_str.str(),actual_str.str());
}

TEST(CharQueue, QueueTest2)
{	
    std::stringstream expected_str,actual_str;
    
    cqueue.cq_enqueue('e');

    expected_str << 'e';
    actual_str << cqueue.cq_dequeue();
	CHECK_EQUAL(expected_str.str(),actual_str.str());
}
TEST(CharQueue, QueueTest3)
{	
    std::stringstream expected_str,actual_str;
    char c=0;
    
    actual_str << cqueue.cq_dequeue(); //empty queue

    expected_str << c;
	CHECK_EQUAL(expected_str.str(),actual_str.str());
}
