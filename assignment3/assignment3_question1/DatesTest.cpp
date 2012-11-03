#include "TestHarness.h"
#include "dates.h"
// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(question1_test1, days_test)
{	
	struct Date actual_date,expected_date,date;

	expected_date.year=2012;
	expected_date.month=1;
	expected_date.day=20;
	
	actual_date=expected_date;

	CHECK_EQUAL(expected_date.year,actual_date.year);
	CHECK_EQUAL(expected_date.month,actual_date.month);
	CHECK_EQUAL(expected_date.day,actual_date.day);

	date.year=2012;
	date.month=1;
	date.day=20;
	add_day(date);
	expected_date.year=2012;
	expected_date.month=1;
	expected_date.day=21;
	CHECK_EQUAL(expected_date.year,date.year);
	CHECK_EQUAL(expected_date.month,date.month);
	CHECK_EQUAL(expected_date.day,date.day);
}
