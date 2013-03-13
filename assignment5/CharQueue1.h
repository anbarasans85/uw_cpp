#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<char> charqueue;

    charqueue.push_back('a');
    charqueue.push_back('e');
    charqueue.push_back('i');
    charqueue.push_back('o');
    charqueue.push_back('u');
    
    while(!charqueue.empty()) {
        cout << "Char: " << charqueue.front() << endl;
        charqueue.pop_front();
    }
    return 0;
}
