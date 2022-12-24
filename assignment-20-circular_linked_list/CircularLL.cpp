// Circular Linked List

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *tail = NULL;

void insertatbeg(int val)
{
    if(tail == NULL)
    {       
        node *p = new node;
        p->data = val;
        p->next = p;
        tail = p;
    }
    else
    {   
        node *p = new node;
        p->data = val;
        p->next = tail->next;
        tail->next = p;
    }
}

void insertatend(int val)
{
    node *p = new node;
    p->data = val;
    p->next = tail->next;
    
    tail->next = p;
    tail = tail->next;

}

void insertatpos(int val, int pos)
{   
    node *temp = tail->next;
    node *p = new node;
    p->data = val;
    p->next = NULL;

    int i=1;
    while(i<pos-1)
    {
        temp= temp->next;  
        i++;    
    }

    p->next = temp->next;
    temp->next = p;
}

void deleteatbeg()
{   
    if(tail->next == tail)
    {
        tail=NULL;
        delete(tail);
    }
    node *temp = tail->next;
    tail->next = temp->next;
    delete(temp);
}

void deleteatend()
{
    node *temp = tail->next;
    while(temp->next!=tail)
    {
        temp = temp->next;
    }
    temp->next = tail->next;
    delete(tail);
    tail = temp;
}

void deleteatpos(int pos)
{   
    node *temp = tail->next;
    node *temp2;
    int i =1;
    while(i<pos)
    {
        temp = temp->next;
        temp2 = temp;
        i++;
    }
    temp2->next = temp->next;
    delete(temp);
    
}

void traverse()
{   
    cout<<"array:"<<endl;
    node *temp = tail->next;
    do
    {
    cout<<temp->data<<"\t";
    temp=temp->next;
    } while(temp!=tail->next);

}

int main() 
{   
    insertatbeg(7);
    insertatend(11);
    insertatpos(20,2);
    deleteatend();
    
    insertatbeg(16);
    insertatend(35);
    deleteatbeg();
    insertatpos(5,3);
    
    insertatbeg(71);
    insertatend(68);
    insertatpos(9,5);
    
    traverse();
    
    return 0;
}

