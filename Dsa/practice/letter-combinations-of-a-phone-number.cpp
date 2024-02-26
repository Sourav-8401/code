#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<string> letter(char dig, vector<string>& re, map<char, vector<char>>& lmap){
    vector<string> ans;
        if(dig == '7' || dig == '9'){
            for(int i=0;i<re.size();i++){
                string a1 = re[i] + string(1,lmap[dig][0]);
                string a2 = re[i] + string(1,lmap[dig][1]);
                string a3 = re[i] + string(1,lmap[dig][2]);
                string a4 = re[i] + string(1,lmap[dig][3]);
                ans.push_back(a1);
                ans.push_back(a2);
                ans.push_back(a3);
                ans.push_back(a4);
            }

        }else{
            for(int i=0;i<re.size();i++){
                string a1 = re[i] + string(1,lmap[dig][0]);
                string a2 = re[i] + string(1,lmap[dig][1]);
                string a3 = re[i] + string(1,lmap[dig][2]);
                ans.push_back(a1);
                ans.push_back(a2);
                ans.push_back(a3);
            }
            
        }
    return ans;
}
int main()
{
    string digits = "73";
    map<char, vector<char>> lmap;
    lmap['0'] = {' '};
    lmap['2'] = {'a', 'b', 'c'};
    lmap['3'] = {'d', 'e', 'f'};
    lmap['4'] = {'g', 'h', 'i'};
    lmap['5'] = {'j', 'k', 'l'};
    lmap['6'] = {'m', 'n', 'o'};
    lmap['7'] = {'p', 'q', 'r', 's'};
    lmap['8'] = {'t', 'u', 'v'};
    lmap['9'] = {'w', 'x', 'y', 'z'};

    vector<string> res = {""};
    int x=0;

    while(x<digits.length()){
        res = letter(digits[x],res,lmap);
        x++;
    }
    for(auto i: res){
       cout<<i<<" ";
    }
    return 0;
}