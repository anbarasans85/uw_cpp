#include "probe.h"

SimpleClass::SimpleClass()
{
    object_count++;
}

SimpleClass::SimpleClass(int i)
{
    object_count++;
    int_data=i;
}

SimpleClass::SimpleClass(int i, char ch)
{
    object_count++;
    int_data=i;
    char_data=ch;
}

SimpleClass::SimpleClass(SimpleClass &s)
{
    object_count++;
}

SimpleClass::~SimpleClass()
{
    object_count--;
}
void SimpleClass::SimpleFunction1(void)
{
    SimpleFunction1_count++;
}
void SimpleClass::SimpleFunction2(void)
{
    SimpleFunction2_count++;
}

unsigned int function1()
{
    static unsigned int fun_count=0;
    fun_count++;
    return fun_count;
}
unsigned int function2()
{
    static unsigned int fun_count=0;
    fun_count++;
    return fun_count;
}
