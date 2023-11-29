#include <iostream>
using namespace std;

void printArray(char arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void swap(char* a, char* b) {
    char temp = *b;
    *b = *a;
    *a = temp;
}

int partition(char arr[], int low, int high) {
    int pivot = low;
    int start = low;
    int end = high;
    
    while(start < end) {
        while(arr[start] <= arr[pivot]) {
            start++;
        }
        while(arr[end] > arr[pivot]) {
            end--;
        }
        if(start < end) {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[low], &arr[end]);
    return end;
}

void quickSort(char arr[], int low, int high) {
    if(low < high) {
        int pos = partition(arr, low, high);
        cout << pos << endl;
        quickSort(arr, low, pos - 1);
        quickSort(arr, pos + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    char *characters = new char[n];
    for (int i = 0; i < n; i++) {
        cin >> characters[i];
    }
    
    quickSort(characters, 0, n - 1);
    printArray(characters, n);
    delete[] characters;
    return 0;
}