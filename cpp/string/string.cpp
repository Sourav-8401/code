#include <iostream>
using namespace std;
int main() {
    int size,i;
    int max=0;
    cin >>size;
        int j=i+1; //front 
        int k=i-1; //back
    int arr[size];
    //entering array
    for (int i = 0;i<size;++i){
        cin>>arr[i] ;
    }
    //loop for n
    for(int i =0; i<size; i++){
        if(k<0 || j<0){
            break;
        }
        //front check
        while(arr[j]>=arr[i]){
            max = max + arr[i]; 
            j++;
        }
        //back check
        while(arr[k]>=arr[i]){
            max = max + arr[i];
            k--;
        }
    }
    cout << max <<endl;
}