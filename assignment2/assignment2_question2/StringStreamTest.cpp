#include "TestHarness.h"

// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested

struct daysofmonth 
{
	std::string month;
	unsigned int days;
};

TEST(question2_test1, swap_ptr_test)
{
	const unsigned int NUM_MONTHS=12;

	struct daysofmonth array_struct[NUM_MONTHS];
	unsigned int temp_int=0;
	std::stringstream ss1,ss2;

	//initializing variables
	unsigned int i=0;
	std::string temp_string="";

	unsigned int array_days[]= {31,28,31,30,31,30,31,31,30,31,30,31};
	std::string array_month[] = {"January", "February", "March", "April",
	                      "May", "June", "July", "August",
		               "September", "October", "November", "December"};

	//initializing struct values
	for(i=0;i<NUM_MONTHS;i++) {
		array_struct[i].days=array_days[i];
		array_struct[i].month=array_month[i];
	}

	//streaming from array
	for(i=0;i<NUM_MONTHS;i++) {
		ss1 << array_days[i];
		if(!ss1) {
			CHECK_FAIL("question2_test1_1: conversion failed");
		}
		ss1 << " "; //ignoring error checking
		ss2 << array_month[i];
		if(!ss2) {
			CHECK_FAIL("question2_test1_2: conversion failed");
		}
		ss2 << " ";
	}

	//streaming from the stringstream variables and checking.
	for(i=0;i<NUM_MONTHS;i++) {
		ss1 >> temp_int;
		CHECK_EQUAL(temp_int,array_days[i]);
		if(!ss1) {
			CHECK_FAIL("question2_test1_3: conversion failed");
		}
		CHECK_EQUAL(temp_int,array_days[i]);
		ss2 >> temp_string;
		if(!ss1) {
			CHECK_FAIL("question2_test1_4: conversion failed");
		}
		CHECK_EQUAL(temp_string,array_month[i]);
	}
	
	//reseting stringstream variables
	ss1.str("");
	ss2.str("");

	//streaming from struct
	for(i=0;i<NUM_MONTHS;i++) {
		ss1 << array_struct[i].days;
		if(!ss1) {
			CHECK_FAIL("question2_test1_5: conversion failed");
		}
		ss1 << " ";
		ss2 << array_struct[i].month;
		if(!ss2) {
			CHECK_FAIL("question2_test1_6: conversion failed");
		}
		ss2 << " ";
	}

	//streaming from the stringstream variables and checking.
	for(i=0;i<NUM_MONTHS;i++) {
		ss1 >> temp_int;
		if(!ss1) {
			CHECK_FAIL("question2_test1_7: conversion failed");
		}
		CHECK_EQUAL(temp_int,array_days[i]);
		ss2 >> temp_string;
		if(!ss1) {
			CHECK_FAIL("question2_test1_8: conversion failed");
		}
		CHECK_EQUAL(temp_string,array_month[i]);
	}
}
