// stack using linked list
#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

node *top = NULL;

void push(int val)
{
    node *p = new(nothrow) node;
    if(!p)
    {
        cout<<"overflow";
    }
    else
    {   
        p->data = val;
        p->next = top;
        top = p;
    }
}

void pop()
{   if(top == NULL)
    {
        cout<<"underflow";
    }
    else{
        node *temp = top;
        top = top->next;
        temp->next = NULL;
        delete(temp);
    }
}

void traverse()
{
    node *temp = top;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}
int main() {
    push(5);
    push(7);
    push(3);
    pop();
    push(1);
    push(9);
    push(0);
    push(13);
    
    traverse();

    return 0;
}
