#include "probe.h"

void function1(void);
void function2(void);

ProbeClass p1;

int main()
{
    function1();
    function2();
    
    std::cout << "Count: " << p1.GetObjectCount() << std::endl; 
    //prints 2 which is correct

    return 0;
}

void function1(void)
{
    ++p1;

    return;
}

void function2(void)
{
    function1();

    return;
}
