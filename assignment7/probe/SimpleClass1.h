#ifndef SIMPLECLASS1_H
#define SIMPLECLASS1_H

#pragma once

#include "probe.h"

class SimpleClass1
{
    public:
        SimpleClass1();
        ~SimpleClass1();
        unsigned int GetCount();
    private:
        static ProbeClass p1;
};

#endif
