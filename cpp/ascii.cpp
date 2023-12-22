#include<iostream>
#include<string.h>
using namespace std;
int main(){
string str1;
cin >> str1;
int *arr = new int[26]();
for(int i=0; i< str1.lenght() ; i++){
arr[str1[i]-'a']++;
}

int max = 0;
char ch;

for(int i=0; i<26; i++){
if(arr[i]>=max){
max = arr[i];
ch = 'a'+i;
}
}
cout << max << endl << ch;
}