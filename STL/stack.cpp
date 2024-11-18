#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // Stack LIFO - Last in first out..
    // all operation in stack is O(1)

    stack<int> stk1;
    stk1.push(3);
    stk1.push(1);
    stk1.push(8);
    stk1.push(4);
    stk1.push(6);
    // stack contains {6,4,8,1,3}

    cout<<stk1.top()<<endl;  // return 6 top only print, will not delete like pop
    stk1.pop(); // display and remove the top most elemnt in the stack.
    cout<<stk1.size(); // return the size of the stac

    return 0;
}