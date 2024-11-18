#include<iostream>
using namespace std;

int main()
{
    // Normal pair..
    pair<int,int> pair1 = {3,5};
    cout<<pair1.first<<" "<<pair1.second<<endl;

    // pair within pair
    pair<int,pair<int,int>> pair2 = {4,{2,3}};
    cout<<pair2.first<<" "<<pair2.second.first<<" "<<pair2.second.second;
    cout<<endl;

    // pair array
    pair<int,int> pair3[] = {{3,4},{2,7},{3,6},{6,9}};
    cout<<pair3[1].first; // Index denotes 1st pair...

    // pair with different data type
    pair<string,int> pair4 = {"Rohit",55};
    cout<<endl<<pair4.first<<" "<<pair4.second;

    return 0;
}