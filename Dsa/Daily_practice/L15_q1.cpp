#include <iostream>
#include <string>
using namespace std;
int top = -1;
void insert(char stack[],char data)
{
    top++;
    cout<<"Address of stack: "<<&stack<<endl;
    stack[top] = data;
}
void display(char ff[])
{
    while(top!= -1){
    cout<<ff[top];
    top--;
    }
}
int main()
{
    string str;
    getline(cin, str);
    int len = str.length();
    char container[len];
    cout<<"Address of container: "<<&container<<endl;
    for(int i=0; i<len; i++)
    {
        char data = str[i];
        insert(container,data);
    }
    display(container);

}