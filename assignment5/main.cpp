#include<iostream>

class CharQueue
{
    public:
        void enqueue(char);
        char dequeue();
    private:
        char *c_array;
};

void CharQueue::enqueue(char c)
{
    std::cout << "Enqueue" << std::endl;
}

char CharQueue::dequeue()
{
    char c='a';
    std::cout << "Dequeue" << std::endl;

    return c;
}

int main()
{
    char c;
    CharQueue q;

    q.enqueue('a');
    c=q.dequeue();
}
