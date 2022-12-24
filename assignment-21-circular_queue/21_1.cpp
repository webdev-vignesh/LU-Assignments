// Circular Queue using array

#include <iostream>
using namespace std;

#define MAX 5
int a[MAX];
int front, rear = -1;

void enqueue(int val)
{
    if((rear+1)%MAX == front)
    {
        cout<<"overflow";
    }
    else if(front == -1 && rear == -1)
    {
        front++;
        rear++;
        a[rear] = val;
        cout<<"inserting "<<val<<endl;
    }
    else
    {
        rear=(rear+1)%MAX;
        a[rear] = val;
        cout<<"inserting "<<val<<endl;
    }
}

void dequeue()
{   
    if(front == -1 && rear == -1)
    {
        cout<<"underflow";
    }
    else if(front == rear)
    {
        cout<<"deleting "<<a[front]<<endl;
        front = -1;
        rear = -1;
    }
    else
    {
        cout<<"deleting "<<a[front]<<endl;
        front=(front+1)%MAX;
    }
}

void traverse()
{   
    cout<<"array:"<<"\t";
    for(int i=front; i!=rear; i=(i+1)%MAX)
    {
        cout<<a[i]<<"\t";
    }
}

int main() 
{
    enqueue(4);
    enqueue(23);
    enqueue(11);
    dequeue();
    dequeue();
    enqueue(24);
    enqueue(11);
    dequeue();
    
    traverse();

    return 0;
}
