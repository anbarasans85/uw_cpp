#include "CharQueue1.h"

void CharQueue1::enqueue(char c)
{
    char_queue.push_back(c);
    return;
}

char CharQueue1::dequeue()
{
    char c=0;

    if(!char_queue.empty()) {
        c=char_queue.front();
        char_queue.pop_front();
    } else {
        std::cout << "Dequeue but queue is empty";
    }
    return c;
}
