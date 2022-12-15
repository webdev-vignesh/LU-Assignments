// Doubly linked list - Menu driven program
#include <iostream>
using namespace std;

class node
{
    public:
    node *prev;
    int data;
    node *next;
};

node *head = NULL;

void insertatbeg(int val)
{
    node *p = new node;
    p->data = val;
    p->prev = NULL;
    p->next = NULL;
    if(head == NULL)
    {
        head = p;
    }
    else
    {
        head->prev = p;
        p->next = head;
        head = p;
    }
}

void insertatend(int val)
{
    node *p = new node;
    p->data = val;
    p->prev = NULL;
    p->next = NULL;  
    node *temp = head;
    
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
}

void insertatspec(int val, int pos)
{
    node *p = new node;
    p->data = val;
    p->prev = NULL;
    p->next = NULL;

    node *temp = head;
    int i =1;
    while(i<pos-1)
    {
        temp = temp->next;
        i++;
    }
    if (temp->next == NULL)
    {
        temp->next = p;
        p->prev = temp;
    }
    else
    {
        p->prev = temp;
        p->next = temp->next;
        temp->next = p;
        temp->next->prev = p;
    }
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

void deleteatbeg()
{
    head = head->next;
    delete(head->prev);
    head->prev = NULL;
}

void deleteatend()
{
    node *temp = head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->prev->next = NULL;
    delete(temp);
}

void deleteatspec(int pos)
{
    node *temp = head;
    int i=1;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete(temp);
}

int main() {
    int val, choice, pos;
    cout<<"Doubly Linked List operations:\n";
    cout<<"Enter\n1 for Insertion at beginning\n";
    cout<<"2 for Insertion at end\n";
    cout<<"3 for Insertion at specified location\n";
    cout<<"4 for Traversing\n";
    cout<<"5 for Deletion at beginning\n";
    cout<<"6 for Deletion at end\n";
    cout<<"7 for Deletion at specified location\n";
    cout<<"8 for Exit";
    
    while(1)
    {   
        cout<<"\nEnter your choice: \n";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            cout<<"Enter a value to insert at beginning: \n";
            cin>>val;
            insertatbeg(val);
            traverse();
            break;
            
            case 2:
            cout<<"Enter a value to insert at end: \n";
            cin>>val;
            insertatend(val);
            traverse();
            break;
            
            case 3:
            cout<<"Enter a value to insert: \n";
            cin>>val;
            cout<<"Enter the location you want to insert it:\n";
            cin>>pos;
            insertatspec(val, pos);
            traverse();
            break;
            
            case 4:
            cout<<"Traversing the list...";
            traverse();
            break;
            
            case 5:
            cout<<"Deletion at beginning: \n";
            deleteatbeg();
            traverse();
            break;
            
            case 6:
            cout<<"Deletion at end: \n";
            deleteatend();
            traverse();
            break;
            
            case 7:
            cout<<"Enter the position where you want to delete: \n";
            cin>>pos;
            deleteatspec(pos);
            traverse();
            break;
            
            case 8:
            exit(0);
        }
    }
    return 0;
}
