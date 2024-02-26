#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
        int x; cin>>x;
         //BruteForce

        // string s;
        // s = to_string(x);
        // int srt=0; 
        // int end= s.length() - 1;
        // while(srt!=end && srt<end){
        //     if(s[srt] == '-'){
        //         srt++;
        //         continue;
        //     }
        //     swap(s[srt], s[end]);
        //     srt++;
        //     end--;
        // }
        // istringstream iss(s);
        // iss >> x;
        // if(x <= -2147483648  || x >= 2147483647 ){
        //     return 0;
        // }
        // return x;

        //Optimal
        int l;
        int rev = 0; //-123
        while(x!=0){
            if(rev  > INT_MAX/10 || rev <INT_MIN/10){
                return 0;
            }
            l = x%10;
            rev = rev*10 + l;
            x = x/10;
        }
        return rev;
}