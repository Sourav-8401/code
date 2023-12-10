#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int res;
        vector<int> arr;
        int n = nums.size();
        for(int i=0; i<n;i++){
            for(int j=i; j<n;j++){
                res = nums[i] + nums[j];
                if(res == target){
                    arr.push_back(i);
                    arr.push_back(j);
                    return arr;
                }
            }
        }
        // return arr;
    }
};
int main(){
    Solution o;
    vector<int> v = {2,7,11,15};
    int t = 9;
    // cout<<1;
    vector<int> c;
    c = o.twoSum(v, t);
    for(auto i:c){
        cout<<i<<" ";
    }
    cout<<endl;
}