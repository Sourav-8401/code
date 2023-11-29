#include <iostream>
using namespace std;
void swap(int* a, int* b){
   int  temp = *b;
   *b = *a;
   *a = temp;
}
int partition(int* arr, int lb,int ub){
    int start = lb;
    int end = ub;
    int pivot = lb;
    while(start<end){
        while(arr[start] <= arr[pivot]){
            start++;
        }
        while(arr[end] > arr[pivot]){
            end--;
        }
        if(start<end){
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}
void quicksort(int* arr,int lb,int ub){
    if(lb<ub){
       int pos = partition(arr, lb, ub);
       quicksort(arr, lb, pos-1);
       quicksort(arr, pos + 1, ub);
    }

}
int main(){
    int a[5] = {23,2,2,32,95};
    quicksort(a,0,5);
    for(int i = 0; i<5; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}