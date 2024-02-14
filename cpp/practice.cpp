#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
        string s;
        cin>>s;
        vector<int> alphaList(26, 0);
        int count1 = 0, count2 = 0, pos;
        for(int i=0; i<s.length(); i++){
            pos = s[i] - 'a';
            if(alphaList[pos] == 0){
                count1++;
                alphaList[pos]++;
            }
            else{
                if(count1>count2){
                    count2 = count1;
                }
                alphaList.assign(26,0);
                pos = s[i] - 'a';
                alphaList[pos]++;
            }
        }
        cout<<count2;
}
