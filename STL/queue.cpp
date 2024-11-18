#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // Queue is FIFO -> first in first out...
    queue<int> q1;
    q1.push(4);
    q1.push(2);
    q1.push(7);
    q1.push(11);
    q1.push(5);
    q1.push(1);

    // the queue is {4,2,7,11,5,1}

    q1.back(); // print 1
    q1.front(); // print 4;

    q1.pop(); // print {2,7,11,5,1} delete the 1st enterd element;

    return 0;
}