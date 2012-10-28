#include "cat.h"
char * cat_fun_c(char *s1,char *s2)
{
	char *f = new char[20];
	char *s3=f;
	
	while(*s1!='\0') {
		*s3++=*s1++;
	}
	while(*s2!='\0') {
		*s3++=*s2++;
	}
	*s3='\0';

	return f;
}

std::string cat_fun_cpp(const std::string s1,const std::string s2)
{
	std::string s3=s1+s2;
	return s3;
}
