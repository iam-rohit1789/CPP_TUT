#include<iostream>
#include<map>

using namespace std;

int main(){
    // map initialization

    map<int,int> map1; // key:val.
    map<int,pair<int,int>> map2; // key->int, value->pair...
    map<pair<int,int>,int> map3; //key-> pair, value->int..

    map1[1] = 4;  /// Both for map 1
    map1.insert({2,5}); 

    // insertion in map3
    map3[{3,2}] = 6; // {{3,2},6}

    for(auto itr:map1){
        cout<<itr.first<<" "<<itr.second<<endl;
    }

    cout<<map1[1]; // print the 1st index's value...

    

    return 0;
}