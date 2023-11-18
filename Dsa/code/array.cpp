#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,4,35,5,3};
    int size = 5 ;
    int s_range = 4;
    int e_range = 5;
    int i = 0;
    while(i<size){
        if(arr[i]==s_range){
            while(arr[i] != e_range){
                i++;
            }
            i++;
        }
        else{
            cout<<arr[i]<<" ";
            i++;
        }
    }
}