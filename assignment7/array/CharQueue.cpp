#include "CharQueue.h"

void CharQueue::cq_enqueue(char in)
{
    q.cq1_enqueue(in);

    return;
}

char CharQueue::cq_dequeue()
{
    return q.cq1_dequeue();
}
