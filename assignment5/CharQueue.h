#ifndef CHARQUEUE_H_
#define CHARQUEUE_H_

#include "CharQueue1.h"
#include "CharQueue2.h"

class CharQueue
{
    public:
        void cq_enqueue(char);
        char cq_dequeue();

    private:
        CharQueue1 q;
};

#endif
