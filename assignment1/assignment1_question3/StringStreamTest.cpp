#include "TestHarness.h"

// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(question3_test1, stringstream)
{
	double d1=3.140;
	std::stringstream ss1;	
	ss1 << d1;
	if(!ss1) {
		CHECK_FAIL("question3_test1_1: conversion failed");
	}	
	CHECK_EQUAL("3.14",ss1.str()); //double read test


	double d2;
	std::stringstream ss2("3.0e8");
	ss2 >> d2;
	if(!ss2) {
		CHECK_FAIL("question3_test1_2: conversion failed");
	}
	CHECK_DOUBLES_EQUAL(3.0e8,d2,0.1); //double write test
}

TEST(question3_test2, stringstream)
{
	float d1=3.140;
	std::stringstream ss1;
	ss1 << d1;
	if(!ss1) {
		CHECK_FAIL("question3_test2_1: conversion failed");
	}	
	CHECK_EQUAL("3.14",ss1.str()); //float read test


	float d2;
	std::stringstream ss2("3.11");
	ss2 >> d2;
	if(!ss2) {
		CHECK_FAIL("question3_test2_1: conversion failed");
	}
	CHECK_DOUBLES_EQUAL(3.0,d2,0.11); //float write test
}

TEST(question3_test3, stringstream)
{
	std::string s1("CPPPROG");
	std::stringstream ss1;
	ss1 << s1;
	if(!ss1) {
		CHECK_FAIL("question3_test3_1: conversion failed");
	}	
	CHECK_EQUAL("CPPPROG",ss1.str()); //string read test


	std::string s2;
	std::stringstream ss2("CPPPROG");
	ss2 >> s2;
	if(!ss2) {
		CHECK_FAIL("question3_test3_1: conversion failed");
	}
	CHECK_EQUAL("CPPPROG",s2); //string write test
}

TEST(question3_test4, stringstream)
{
	char c1='a';
	std::stringstream ss1;	
	ss1 << c1;
	if(!ss1) {
		CHECK_FAIL("question3_test4_1: conversion failed");
	}	
	CHECK_EQUAL("a",ss1.str()); //char read test


	char c2;
	std::stringstream ss2("C");
	ss2 >> c2;
	if(!ss2) {
		CHECK_FAIL("question3_test4_1: conversion failed");
	}
	CHECK_EQUAL('C',c2); //char write test
}

TEST(question3_test5, stringstream)
{
	int n1;
	std::stringstream ss1("Hello");
	ss1 >> n1;
	if(!ss1) {
		CHECK_FAIL("question3_test5_1: conversion failed"); //conversion will fail here.
	}
	CHECK_EQUAL(0,n1);
}
