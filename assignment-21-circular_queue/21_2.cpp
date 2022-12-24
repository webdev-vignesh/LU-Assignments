// Circular Queue using linked list

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
        p->next = p;
        front =p;
        rear =p;
    }
    else
    {   
        p->next = front;
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
        rear->next = front->next;
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
        do
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }while(temp->next!=front->next);
    }
}

int main() 
{
    enqueue(4);
    enqueue(11);
    enqueue(30);
    enqueue(7);
    enqueue(19);
    dequeue();
    dequeue();
    enqueue(33);
    
    
    traverse();

    return 0;
}
