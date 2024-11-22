#include<bits/stdc++.h>

using namespace std;

int main(){
    string word = "rohit";
    do{
        cout<<word<<endl;
    }while(next_permutation(word.begin(),word.end()));


    int ar1[5] = {4,2,7,1,9};
    int max = *max_element(ar1,ar1+5);
    cout<<endl<<max;

    return 0;
}