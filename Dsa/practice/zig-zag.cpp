#include <iostream>
#include <vector>
#include <string>
using namespace std;
string convert(string s, int numRows)
{
    if (numRows == 1)
    {
        return s;
    }
    int c1 = 0;
    int count = 0;
    string res;
    int n = s.length();
    vector<string> arr(numRows, "");
    --numRows;
    int j = 0;
    while (j < n)
    {
        if (c1 == 0)
        {
            int i = 0;
            while (i < numRows)
            {
                if (j == n)
                {
                    break;
                }
                arr[count] = arr[count] + s[j];
                count++;
                i++;
                j++;
            }
            c1++;
        }
        else
        {
            int i = 0;
            while (i < numRows)
            {
                if (j == n)
                {
                    break;
                }
                arr[count] = arr[count] + s[j];
                count--;
                i++;
                j++;
            }
            c1--;
        }
    }
    res = "";
    for (auto i : arr)
    {
        res = res + i;
    }
    // cout<<"\n"<<res<<endl;
    return res;
}
int main()
{
    cout << convert("A", 1);
}
