// stack using array
#include <iostream>
using namespace std;

#define MAX 10
int top = -1;
int a[MAX];
int val;

void push(int val)
{
    if(top == MAX-1)
    {
        cout<<"overflow";
    }
    else{
        top = top+1;
        a[top] = val;   
    }
}

void pop()
{   
    if(top < 0)
    {
        cout<<"underflow";
    }
    else{
        val = a[top];
        top=top-1;   
    }
}

void traverse()
{
    for (int i=top; i>=0; i--)
    {
        cout<<a[i]<<"\t";
    }
}

int main() {
    push(5);
    push(2);
    push(3);
    pop();
    push(8);
    push(45);
    push(39);
    push(11);
    push(82);
    push(9);
    pop();
    pop();
    
    traverse();
    
    return 0;
}
