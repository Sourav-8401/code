#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
        cout << endl;
}
int main()
{
    vector<int> arr;
    arr = {10, 20, 1, 33, 40, 5};
    arr.push_back(11);
    print(arr);
    cout<<is_heap(arr.begin(),arr.end())<<endl;
    
    make_heap(arr.begin(), arr.end());
    print(arr);
    cout<<is_heap(arr.begin(),arr.end())<<endl;
    
    arr.push_back(12);
    push_heap(arr.begin(), arr.end());
    print(arr);
    cout<<is_heap(arr.begin(),arr.end())<<endl;
    cout << "max element:" << arr[0];

    sort_heap(arr.begin(),arr.end());
    print(arr);
    cout<<is_heap(arr.begin(),arr.end())<<endl;
    return 0;
}