#include <iostream>
using namespace std;
void merge(int *arr,int s ,int  e){


}
void mergeSort(int *arr, int s, int e){
    //base
    if(s>e){
        return;
    }
    int mid = (s + e)/2; 
    mergeSort(arr, s, mid);
    mergeSort(arr, s, mid +1);
    merge(arr, s, e);
}
int main(){
    int arr[5] = {2,5, 1, 6, 9};
    int s =0;
    int e = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, s, e);

}