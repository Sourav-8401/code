#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,3,43,2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr + n );
    for(auto i:arr){
        cout<<i<<" ";
    }
}