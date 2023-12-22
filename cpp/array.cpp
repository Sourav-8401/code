#include <iostream>
using namespace std;

int main()
{
    int x, i, start;
    int list = 0;
    int arr1[x];
    int arr2[x];
    cout << "Enter the size of array : ";
    cin >> x;

    for (i = 0; i < x; i++)
    {
        cin >> arr1[i];
    }
    for (start = 0; start < x; start++)
    {
        list = list + arr1[x - start - 1];
        arr2[x - start - 1] = list;
    }
    for (i = 0; i < x; i++)
    {
        cout << arr2[i] << endl;
    }
}