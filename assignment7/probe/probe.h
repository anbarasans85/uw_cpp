#ifndef SIMPLECLASS_H
#define SIMPLECLASS_H

#include <iostream>

class SimpleClass
{
    public:
        SimpleClass();
        SimpleClass(int);
        SimpleClass(int,char);
        SimpleClass(SimpleClass&);
        ~SimpleClass();

        static unsigned int probe_object_count() { return object_count; }

    private:
        int int_data;
        char char_data;

        static unsigned int object_count;
};

unsigned int function1();
unsigned int function2();

#endif
