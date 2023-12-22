#include <iostream>
#include <string>
using namespace std;
#define size 4
int top = -1;
string stack[size];
void push(string data)
{
    if (top == size - 1)
        cout << "Stack overflow" << endl;
    else
    {
        top++;
        stack[top] = data;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        top--;
    }
}
void display()
{
    cout << stack[top];
}

int main()
{
    push("hello");
    push("sourav");
    push("sweatheart");
    push("noheart");
    display();
    pop();
    display();
    pop();
    display();
    pop();
}