// Queue using array

#include <iostream>
using namespace std;

#define MAX 10
int a[MAX];
int front, rear = -1;

void enqueue(int val)
{
    if(rear == MAX-1)
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
        rear++;
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
        front++;
    }
}

void traverse()
{   
    cout<<"array:"<<"\t";
    for(int i=front; i<=rear; i++)
    {
        cout<<a[i]<<"\t";
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
