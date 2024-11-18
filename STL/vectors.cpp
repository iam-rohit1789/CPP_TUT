#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // integer vector...
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(6);
    v1.push_back(8);
    v1.push_back(5);

    // pair vector
    vector<pair<int,int>> v2;
    v2.push_back({1,3});
    v2.emplace_back(5,9); // emplace_back is also same as push_back...

    // vector with element and frequency
    vector<int> v3(5,100); // has 100 with frequency of 5; {100,100,100,100,100}
    vector<int> v4(v3); // Copy the content of v3...

    for(vector<int>::iterator itr = v1.begin();itr != v1.end(); itr++)// begin() denotes starting address of v1 not the elemnt
    {                                                                 // end() denotes the next to last elememt's address
        cout<<*(itr)<<" "; // * used to get the element present in the itr;
    }
}