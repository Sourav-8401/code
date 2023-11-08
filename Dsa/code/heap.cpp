#include <iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}
void maxheap(int a[], int n, int i){
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l<n && a[l] > a[largest]){
        largest = l;
    }
    if(l<n && a[r]> a[largest]){
        largest = r;
    }
    if(largest != i){
        swap(a[i], a[largest]);
        maxheap(a, n, largest);
    }
}

void minheap(int a[], int n, int i){
    int smallest = i;
    int l = 2*i+1;
    int r = 2*i + 2;
    if(l<n && a[l]<a[smallest]){
        smallest = l;
    }
    if(r<n && a[r]<a[smallest]){
        smallest = r;
    }
    if(smallest != i){
        swap(a[i], a[smallest]);
        minheap(a,n,smallest);
    }
}
void buildheapmin(int a[], int n){

    for(int i= (n/2)-1; i>=0; i--){
        minheap(a,n,i);
    }
}
void buildheapmax(int a[], int n){

    for(int i= (n/2)-1; i>=0; i--){
        maxheap(a,n,i);
    }
}
int main(){
    // int a[] = {10,5,15,20};
    int a[] = {10, 5, 15, 2, 20, 30};
    int n = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    buildheapmin(a,n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}