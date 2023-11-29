#include<iostream>
using namespace std;
int main(){
    int size,k=1;
    cin >> size;
    int arr[size], arr1[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                int temp = arr[j];
                arr[j] = arr[size-1];
                arr[size-1] = temp;
                size--;                
            }
        }
    }
    for(int i=0; i<size; i++){
         cout << arr[i] << " " ;
    }
}