#include "CharQueue2.h"

CharQueue2::CharQueue2()
{
    front=rear=-1;
}

void CharQueue2::cq2_enqueue(char c)
{
    if((rear==MAX_QUEUE_SIZE-1 && front==0) || (rear + 1 == front)) {
        std::cout << "Queue is Full" << std::endl;
        return;
    }
    if(rear==MAX_QUEUE_SIZE-1) {
        rear=0;
    } else {
        rear++;
    }

    cq2_queue[rear]=c;
    if(front==-1){
        front=0;
    }
    return;
}

char CharQueue2::cq2_dequeue()
{
    char c=0;

    if(front==-1) {
        std::cout << "Queue is Empty" << std::endl;
        return 0;
    } else {
        c=cq2_queue[front];

        if(front==rear) {
            front=rear=-1;
        } else {
            if(front==MAX_QUEUE_SIZE-1) {
                front=0;
            } else {
                front++;
            }
        }
    }

    return c;
}
