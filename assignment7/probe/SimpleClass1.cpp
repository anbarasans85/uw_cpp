#include "SimpleClass1.h"

ProbeClass SimpleClass1::p1;

SimpleClass1::SimpleClass1() 
{
    ++p1;
}

SimpleClass1::~SimpleClass1() 
{
    --p1;
}

unsigned int SimpleClass1::GetCount() 
{ 
    return p1.GetObjectCount(); 
}
