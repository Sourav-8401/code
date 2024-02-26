#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    //using map:
    map<char, vector<char>> lmap;
    lmap['1'] = {'q','q','q'};
    lmap['0'] = {' '};
    lmap['2'] = {'a','b','c'};
    lmap['3'] = {'d','e','f'};
    cout<<"Map is: "<<lmap['1'][0]<<endl;
    cout<<"Map is: "<<lmap['1'][1]<<endl;
    
    vector<vector<char>> map(3);
    map[0] = {'q','q','q'};
    map[1] = {'a','b','c'};
    map[2] = {'d','e','f'};
    cout<<"Map is: "<<map[1][0]<<endl;
    cout<<"Map is: "<<map[1][1]<<endl;
}