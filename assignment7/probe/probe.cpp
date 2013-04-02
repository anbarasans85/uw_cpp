#include "probe.h"

ProbeClass::ProbeClass()
{
    object_count=0;
}

ProbeClass::~ProbeClass()
{
}

void ProbeClass::operator++()
{
    object_count++;
}

void ProbeClass::operator--()
{
    object_count--;
}

std::ostream& operator<<(std::ostream& out, ProbeClass &p1)
{
    out << "ProbeClass Op. Overloading Count: " << p1.object_count << std::endl;

    return out;
}

unsigned int ProbeClass::GetObjectCount()
{
    return object_count;
}
