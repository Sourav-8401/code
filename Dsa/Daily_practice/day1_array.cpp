#include <iostream>
#include <string>
using namespace std;
int main(){
    int n =5;
    // cin>>n;
    string s;
    string arr[n] = {"apple","banana","orange","banana","grape"};
    // for(int i= 0 ; i<n; i++){
    //    cin>>arr[i];
    // }
    cout<<"previous:"<<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }


    string arr2[n];
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=count; j++){
            if(arr[i] == arr2[j]){
                break;
            }
            else{
                arr2[count] = arr[i];
                cout<<arr2[count]<<endl;
                count++;
                cout<<count<<endl;
            }
        }
    }
    cout<<endl;
    cout<<"updated"<<endl;
    for(int i =0; i<count; i++){
        cout<<arr2[i];
    }
    // for(auto i:arr2){
    //     cout<<i<<" ";
    // }

}