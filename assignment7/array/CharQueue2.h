#ifndef CHARQUEUE2_H_
#define CHARQUEUE2_H_

#include <iostream>
#define MAX_QUEUE_SIZE 10

class CharQueue2
{
    public:
        CharQueue2();
        void cq2_enqueue(char);
        char cq2_dequeue();

    private:
        char cq2_queue[MAX_QUEUE_SIZE];
        int front,rear;
};

#endif
