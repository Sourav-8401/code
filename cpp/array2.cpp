#include <iostream>
using namespace std;
int main() {
    int len;
    string str1, str2 = "";
    cin >> str1;
    len = str1.length();
    for (int i =0 ; i< len; i++){
        str1[i] = str1 + str1[len-i];
    }
    cout << "str: "<< str2<<endl;
    return 0;
}