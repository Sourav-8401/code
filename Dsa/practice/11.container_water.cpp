#include <iostream>
#include <vector>
using namespace std;
int main(){
    // int arr[] = {1,8,6,2,5,4,8,3,7};
   vector<int> arr;
    // int arr[] = {1,1};
    int maxWater = 0;
    int n = arr.size();
    int s=0 , e = n - 1;
    for(int i=0; i<n;++i){
        if(arr[s]<arr[e]){
            maxWater = max(maxWater,(min(arr[s], arr[e])) * (e - s));
            ++s;
        }else{
            maxWater = max(maxWater,(min(arr[s], arr[e])) * (e - s));
            --e;
        }
    }
    return maxWater;
    }