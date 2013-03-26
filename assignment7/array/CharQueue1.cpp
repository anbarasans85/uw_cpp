#include "CharQueue1.h"

void CharQueue1::cq1_enqueue(char c)
{
    cq1_queue.push_back(c);
    return;
}

char CharQueue1::cq1_dequeue()
{
    char c=0;

    if(!cq1_queue.empty()) {
        c=cq1_queue.front();
        cq1_queue.pop_front();
    } else {
        std::cout << "Dequeue but queue is empty" << std::endl;
    }
    return c;
}
