#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v = {2,4,5,4,5,34,1};
    vector<int>:: iterator i;
    sort(v.begin(),v.end());
    i = unique(v.begin() , v.end());
    v.resize(distance(v.begin(),i));
    for(int i:v){
        cout<<i<<" ";
    }
}