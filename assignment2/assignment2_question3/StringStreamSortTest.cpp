#include "TestHarness.h"
// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested


TEST(question3_test1, swap_ptr_test)
{
	const unsigned int MAX_WORDS=20;
	std::stringstream ss1("include the header file for the class you are testing Quit continue with the sentence");
	//std::stringstream ss1("Quit continue with the sentence");
	//std::stringstream ss1("e Quit continue with the sentence");
	std::stringstream ss2("");
	std::string temp_string;
	std::string array_string[MAX_WORDS];
	unsigned int i=0,j=0,word_count=0,add_flag;

	while(1) {
		ss1 >> temp_string;
		if(!ss1) {
			CHECK_FAIL("question2_test3_1: conversion failed");
		}
		if(temp_string.compare("Quit") == 0) {
			//if the word is "Quit", exit the while loop
			break;
		} else {
			//if the word is not "Quit"
			add_flag=1;
			for(i=0;i<=word_count;i++) {
				//if the word is already added to array_string
				if(array_string[i]==temp_string) {
					add_flag=0;
					break;
					//indicate that word neednot be added
				}
			}
			if(add_flag==1) {
				//add the word to a temp array of strings
				array_string[word_count]=temp_string;
				word_count++;
			}
		}
	}
	//sort the array of strings
	for(i=0;i<word_count;i++) {
		for(j=0;j<i;j++) {
			if(array_string[i] < array_string[j]) {
				temp_string = array_string[j];
				array_string[j]=array_string[i];
				array_string[i]=temp_string;
			}
		}
	}
	//stream the sorted strings.
	for(i=0;i<word_count;i++) {
		ss2 << array_string[i];
		if(i<word_count-1) {
			ss2 << " ";
		}
	}
	
	CHECK_EQUAL("are class file for header include testing the you",ss2.str());
	//CHECK_EQUAL("",ss2.str());
	//CHECK_EQUAL("e",ss2.str());
}
