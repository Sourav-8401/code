#include <iostream>
#include <algorithm>
#include <string>
using namespace std; 
// babad
string longestPalindrome(string s)
{
    int len =0, rlen = 0;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        string str= "";
        for (int j = i; j < s.length(); j++)
        {
            str = str + s[j];
            string rev;
            rev = str;
            reverse(rev.begin(), rev.end());
            if (str == rev)
            {
                len = str.length();
                if(len > rlen){
                    rlen = len;
                    res = str;
                }
            }
        }
    }
    return res;
}
int main()
{
    string str1;
    str1 = "c";
    int a = ' ';
    cout<<"longest:"<<longestPalindrome(str1)<<endl;
    cout<<"a: "<<a<<endl;
}