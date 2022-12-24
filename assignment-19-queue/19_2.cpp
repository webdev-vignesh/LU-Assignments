// Queue using linked list

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *front, *rear = NULL;
node *temp = front;

void enqueue(int val)
{
    node *p = new(nothrow) node;
    p->data = val;
    p->next = NULL;
    
    if(!p)
    {
        cout<<"overflow";   
    }
    else if(front == NULL && rear == NULL)
    {
        front =p;
        rear =p;
    }
    else
    {   
        rear->next = p; 
        rear = p;
    }
}

void dequeue()
{   
    if(front == NULL && rear == NULL)
    {
        cout<<"underflow";
    }
    else if(front == rear)
    {   
        cout<<"deleting "<<front->data<<endl;
        front =NULL;
        rear =NULL;
        delete(temp);
    }
    else
    {   
        cout<<"deleting "<<front->data<<endl;
        front = front->next;
        delete(temp);
    }
}

void traverse()
{   
    cout<<"array:"<<endl;
    node *temp = front;
    if(front ==NULL && rear==NULL)
    {
        cout<<"underflow";
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }
}

int main() 
{
    enqueue(4);
    enqueue(23);
    enqueue(11);
    enqueue(30);
    dequeue();
    enqueue(5);
    enqueue(24);
    dequeue();
    
    traverse();

    return 0;
}
