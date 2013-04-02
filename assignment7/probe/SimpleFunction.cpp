#include "probe.h"

void function1(void);
void function2(void);

ProbeClass p1;

int main()
{
    function1();
    function2();
    
    /*prints 3 which is correct*/
    std::cout << p1;

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
