#include <iostream>
using namespace std;
void minheap(int arr[], int n, int i){
    int lar = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if(l<n && arr[l]>arr[lar]){
        lar = l;
    }
    if(r<n && arr[r]>arr[lar]){
        lar = r;
    }
    if(lar != i){
        swap(arr[i], arr[lar]);
        minheap(arr, n, lar);
    }
}
void build_heap(int arr[], int n){
    for(int i = (n/2)-1;i>=0;i--){
        minheap(arr, n, i);
    }
}
void heapSort(int arr[],int n){
    build_heap(arr,n);
    for(int i = n-1; i>0;i--){
        swap(arr[0],arr[i]);
        minheap(arr,i,0);
    }
}
int main(){
    int arr[] = {10, 5, 15, 2, 20, 30};
    int size = sizeof(arr)/ sizeof(arr[0]);
    // build_heap(arr,size);
    heapSort(arr,size);
    for(auto i:arr){
        cout<<i<<" ";
    }
        cout<<endl;

}
// #include <iostream>
// using namespace std;

// void maxHeapify(int arr[], int n, int i) {
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < n && arr[left] > arr[largest])
//         largest = left;

//     if (right < n && arr[right] > arr[largest])
//         largest = right;

//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         maxHeapify(arr, n, largest);
//     }
// }

// void heapSort(int arr[], int n) {
//     // Build a max heap
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         maxHeapify(arr, n, i);
//     }

//     // Extract elements one by one from the heap
//     for (int i = n - 1; i > 0; i--) {
//         swap(arr[0], arr[i]); // Move current root to the end
//         maxHeapify(arr, i, 0); // Call max heapify on the reduced heap
//     }
// }

// int main() {
//     int arr[] = {10, 5, 15, 2, 20, 30};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     heapSort(arr, size);

//     cout << "Sorted array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
