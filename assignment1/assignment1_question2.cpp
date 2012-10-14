#include <iostream>
#include <string>

int main()
{
	int n;
	double d;
	std::string s;

	std::cout << "Enter integer: ";
	std::cin >> n;

	std::cout << "Enter double: ";
	std::cin >> d;

	std::cout << "Enter string: ";
	std::cin >> s;

	std::cout << "Output:" << std::endl;
	std::cout << "Integer: " << n << std::endl; 
	std::cout << "Double: " << d << std::endl; 
	std::cout << "String: " << s << std::endl; 

	return 0;
}
