// stack using linked list
#include <iostream>
using namespace std;

class node
{   
    public:
    int data;
    node *next;
};

node *head = NULL;

void push(int val)
{
    node *p = new node;
    p->data = val;
    p->next = NULL;
    
    if(head == NULL)
    {
        head = p;
    }
    else
    {
        p->next = head;
        head = p;
    }
}

void pop()
{
    node *temp = head;
    head = head->next;
    delete(temp);
}

void traverse()
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}

int main() {
    push(16);
    push(33);
    push(2);
    push(11);
    push(8);
    push(14);
    push(32);
    pop();
    push(71);
    push(49);
    push(25);
    pop();
    pop();
    
    traverse();
    
    return 0;
}
