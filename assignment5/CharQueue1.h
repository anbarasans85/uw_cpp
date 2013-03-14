#ifndef CHARQUEUE1_H_
#define CHARQUEUE1_H_

#include <iostream>
#include <deque>

class CharQueue1
{
    public:
        void cq1_enqueue(char);
        char cq1_dequeue();

    private:
        std::deque<char> cq1_queue;
};

#endif
