#include <iostream>
using namespace std;

int getMaxArea(int arr[], int n){
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        
        // 2 3 5 4 6 2
        int j = i - 1;
        int length = 1;
        while(j >= 0 && arr[j] != 0 && arr[j] >= arr[i]){
            j--;
            length++;
        }
        j = i + 1;
        while(j < n &&  arr[j] != 0 && arr[j] >= arr[i]){
            j++;
            length++;
        }
        
        cout << length << " when i : " << i << endl;
        ans = max(ans , length * arr[i]);
    }
    return ans;
}

int main() {
    int arr[] = {2, 5, 7, 1, 4, 8, 9, 0, 6, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << getMaxArea(arr, n);
    
    
}