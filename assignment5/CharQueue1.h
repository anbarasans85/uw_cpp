#ifndef CHARQUEUE1_H_
#define CHARQUEUE1_H_

#include <iostream>
#include <deque>

class CharQueue1
{
    public:
        void enqueue(char);
        char dequeue();

    private:
        std::deque<char> char_queue;
};

#endif
