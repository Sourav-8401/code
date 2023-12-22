#include <iostream>
using namespace std;

int main()
{
    int n, i, j =0,  size;
    cout << "Enter the size: " << endl;
    cin >> size;
    int arr1[size];
    for (i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    for(i=0; i<size; i++){
        if(arr1[i] == 1){
            int temp;
            temp = arr1[i];
            arr1[i] = arr1[j];
            arr1[j] = temp;
            j++;
        }
    }

    for (i=0; i<size; i++){
        cout<<arr1[i]<<" ";
    }
}