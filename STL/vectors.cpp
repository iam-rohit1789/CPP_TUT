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

    // traversal of vectors

    for(vector<int>::iterator itr = v1.begin();itr != v1.end(); itr++)// begin() denotes starting address of v1 not the elemnt
    {                                                                 // end() denotes the next to last elememt's address
        cout<<*(itr)<<" "; // * used to get the element present in the itr;
    }
    cout<<endl;
    for (auto itr = v1.begin(); itr != v1.end();itr++) // auto find data type automatically
    {
        cout<<*(itr)<<" "; // * used to get the element present in the itr;
  
    }
    cout<<endl;
    for(auto itr:v1)
    {
        cout<<itr<<" ";
    }

    //erasing the vector 
    // the vector {10,6,8,5}
    v1.erase(v1.begin()+1); // delete 6 and re adjust the vector
    v1.erase(v1.begin()+1,v1.begin()+3); //delete 6 and 8. begin()+1 = 6, begin()+3 = 5 delete until previous...

    // insert element to vector
    vector<int> v5(4,100); // {100,100,100,100}
    v5.insert(v5.begin(),50); // insert at first {50,100,100,100,100} (position,element) if 2 argument..
    v5.insert(v5.begin()+4,2,25); //insert right after the positon {50,100,100,100,100,25,25}  (position,num_element,element)

    // copy
    vector<int> copy(2,55); // new vectore named copy {55,55}
    v5.insert(v5.begin(),copy.begin(),copy.end()); // insert copy vector into v5 at begining ...    v5-> {55,55,50,100,100,....}
    v5.pop_back(); // pop the last element

    // vector swap
    // v1 = {34,56} and v2= {20,30}
    // v1.swap(v2) v1={20,30} and v2={34,56}

    //v5.clear() // erase the entire vector

    return 0;
    

}