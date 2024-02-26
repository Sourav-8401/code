#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool ispalindrome(string so){
    // cout<<so;
        int e = so.length()-1;
        int flag = 0;
    for(int i = 0; i<so.length(); i++){
        if(so[i] != so[e]){
        // cout<<"e:"<<so[e]<<" s:"<<so[i]<<endl;
        flag++ ;}
        e--;
    }
    if(flag>0){
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    // vector int -----------------------------------
    // vector<int> v;
    // v = {1, 2, 3, 4, 5};
    // v.push_back(400);
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // //--------------------------------------------------

    // //vector String-------------------------------------
    // vector<string> str = {"asd", "asd", "red"};
    // cout << "capacity " << str.capacity() << endl;
    // cout << "Size " << str.size() << endl;
    // cout << "front: " << str.front() << endl;
    // cout << "back: " << str.back() << endl;
    // for (string i : str)
    // {
    //     cout << i << " ";
    // }
    // str.pop_back();
    // cout<<"str.pop"<<endl;
    // /*for copy*/ vector<string> str2(str);
    // for (string s : str2)
    // {
    //     cout << s << " ";
    // }
    // cout << endl;
    // /*Auto initializer for vector*/ vector<string> str3(5,"sourav");
    // cout<<"Auto initializer for vector: ";
    // for(auto i:str3){cout<<i<<" ";}
    // cout << "\nstr2[0]: " << str2[0][2];
    // cout << endl;
    // //string---------------------------------------------------------

    // //for loop auto in array-----------------------------------------
    // int arr[] = {1, 23, 4, 554, 2};
    // for (int i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout<<endl;
    // for(auto i:arr)
    //     {cout<<i<<" ";}
    // //-----------------------------------------------------------------
    // cout<<endl;
    // cout<<ispalindrome(" sos ");


    // resizing the vector;
    vector<int> num1 = {1, 3};
    vector<int> num2 = {2};
    int len1 = num1.size();
    int len2 = num2.size();
    vector<int> num3(num1);
    // num3.resize(4);
    num3.insert(num3.end(),num2.begin(), num2.end());
    int n = num3.size();
    sort(num3.begin(), num3.end());
    for(auto i : num3){
        cout<<i<<" ";
    }
    cout<<"\n"<<num3[(n/2)]<<endl;
    vector<int> num4;

}