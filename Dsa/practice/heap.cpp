#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,423,51,1,55,2,6};
    int size = sizeof(arr)/sizeof(arr[1]);
    sort(arr, arr + size);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> v = {2,423,51,1,55,2,6};
    int s = v.size();
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> ::iterator i;
    i = unique(v.begin(), v.end());
    v.resize(distance(v.begin(),i));
    for(int i:v){
        cout<<i<<" ";
    }

}