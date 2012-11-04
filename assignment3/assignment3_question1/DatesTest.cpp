#include "TestHarness.h"
#include "dates.h"
// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested

struct Date expected_date,actual_date;

#define CHECK_DATES(expected,actual) \
	CHECK_EQUAL(expected.year,actual.year); \
	CHECK_EQUAL(expected.month,actual.month); \
	CHECK_EQUAL(expected.day,actual.day); \

TEST(question1_test1, days_test)
{	
	actual_date.year=2012;
	actual_date.month=2;
	actual_date.day=29;
	add_day(actual_date); //add day
	expected_date.year=2012;
	expected_date.month=3;
	expected_date.day=1;	
	CHECK_DATES(expected_date,actual_date);
}
TEST(question1_test2, days_test)
{	
	actual_date.year=2012;
	actual_date.month=8;
	actual_date.day=30;
	add_day(actual_date); //add day
	expected_date.year=2012;
	expected_date.month=8;
	expected_date.day=31;	
	CHECK_DATES(expected_date,actual_date);
}
TEST(question1_test3, days_test)
{	
	actual_date.year=2012;
	actual_date.month=12;
	actual_date.day=1;
	add_day(actual_date); //add day
	expected_date.year=2012;
	expected_date.month=12;
	expected_date.day=2;	
	CHECK_DATES(expected_date,actual_date);
}
TEST(question1_test4, days_test)
{	
	actual_date.year=2012;
	actual_date.month=12;
	actual_date.day=31;
	add_day(actual_date); //add day
	expected_date.year=2013;
	expected_date.month=1;
	expected_date.day=1;	
	CHECK_DATES(expected_date,actual_date);
}
