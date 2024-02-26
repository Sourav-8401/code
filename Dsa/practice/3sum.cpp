#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nums[] = {0,0,0};
    int n = sizeof(nums) / sizeof(nums[0]);
    vector<vector<int>> res;
    // int res_i = 0;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i + 1; j < n-1; j++)
        {
            int num1 = nums[i];
            int num2 = nums[j];
            int num3 = nums[j + 1];
            if (num1 + num2 + num3 == 0)
            {
                res.push_back({num1,num2,num3});
            }
        }
    }
    cout<<"[";
    for(const auto& row: res){
    cout<<"[";
        for(int ele: row){
            cout<<ele<<",";
        }
    cout<<"]";
    }
    cout<<"]";


}
