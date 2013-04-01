#ifndef PROBECLASS_H
#define PROBECLASS_H

#pragma once

#include <iostream>

class ProbeClass
{
    public:
        ProbeClass();
        ~ProbeClass();
        void operator++(); 
        void operator--(); 
        unsigned int GetObjectCount();
        friend std::ostream& operator<<(std::ostream&);
    private:
        unsigned int object_count;
};


#endif
