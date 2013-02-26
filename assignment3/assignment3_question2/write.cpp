#include "write.h"
#include <sstream>
#include <iostream>

void write(std::ostream &os, int value)
{
    os << value;
	return;
}
void write(std::ostream &os, float value)
{
    os << value;
	return;
}
void write(std::ostream &os, std::string value)
{
    os << value;
	return;
}
/* The function that pass cout as argument to overloaded write functions */
void cout_write()
{
    write(std::cout,4321);
    std::cout << "\n";
    write(std::cout,(float)6543.21);
    std::cout << "\n";
    write(std::cout,"Testing");
    std::cout << "\n";
    std::cout << "\n";
}
