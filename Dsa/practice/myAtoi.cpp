#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = " 1- 123 this is with word";
    int ans = 0, unit = 1, digit, neg = 0;
    for (int i = s.length(); i>=0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            digit = s[i] - '0'; // 3 2
            ans = ans + (digit*unit); // 3*1 + 0  // 3 + 20
            unit = unit * 10;       //100
        }else{
            if(s[i] == '-'){
                neg++;
            } 
            continue;
        }
    }
    if(neg>0){
        ans = ans * -1;
    }
    cout << ans << endl;
    cout << "to check:" << ans * 2;
}