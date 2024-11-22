#include<vector>
#include<bits/stdc++.h>


using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second > p2.second) return true;
    if(p1.second < p2.second) return false;
    // they are same

    if(p1.second < p2.second) return true;
    return false;
}

int main(){
    int arr[5] = {4,2,6,5,8};

    sort(arr,arr+5);
    // Ascending order...
    for(auto itr:arr){
        cout<<itr<<" ";
    }


    // Sorting in our way....
    pair<int,int> arr1[] = {{1,2},{2,4},{4,1}};
    // sort ascending according to second element ;
    // if second is same then sort using first in descending order...
    //sort(arr,arr+3,comp);
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<arr1[i].first<<" "<<arr1[i].second<<endl;
    }

  return 0;
}