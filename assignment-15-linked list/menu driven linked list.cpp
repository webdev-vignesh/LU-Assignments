// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *head = NULL;

void insertionatbeg(int val)
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

void insertionatend(int val)
{
    node *p = new node;
    p->data = val;
    p->next = NULL; 
    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    
}

void insertionatspec(int val, int pos)
{
    node *p = new node;
    p->data = val;
    p->next = NULL;
    node *temp = head;
    int i=1;
    while(i<pos-1)
    {
        temp = temp->next;
        i++;
    }
    p->next = temp->next;
    temp->next = p;
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

void deletionatbeg()
{
    node *temp=head;
    head = head->next;
    temp->next = NULL;
    delete(temp);
}

void deletionatend()
{
    node *temp=head;
    node *temp2=head;    
    while(temp->next != NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }
    delete(temp);
    temp2->next = NULL;
}

void deletionatspec(int pos)
{
    node *temp=head;
    node *temp2=head; 
    int i=1;
    while(i<pos)
    {
        temp2 = temp;
        temp = temp->next;
        i++;
    }
    temp2->next = temp->next;
    delete(temp);
}

int main() {
    int choice, val, pos;
    cout<<"Linked list operations "<<endl;
    cout<<"1 for insertion at beginning"<<endl;
    cout<<"2 for insertion at end"<<endl;
    cout<<"3 for insertion at specific location"<<endl;
    cout<<"4 for traversing the list"<<endl;
    cout<<"5 for deletion at beginning"<<endl;
    cout<<"6 for deletion at end"<<endl;
    cout<<"7 for deletion at specific location"<<endl;
    cout<<"8 for exit"<<endl;
    
    while(1)
    {   
        cout<<"\nEnter your choice: "<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1: 
                cout<<"Insertion at beginning\n";
                cout<<"Enter the value to be inserted:"<<endl;
                cin>>val;
                insertionatbeg(val);
                traverse();
                break;
            case 2: 
                cout<<"Insertion at end\n";
                cout<<"Enter the value to be inserted:"<<endl;
                cin>>val;
                insertionatend(val);
                traverse();
                break;
            case 3: 
                cout<<"Insertion at specific location\n";
                cout<<"Enter the value to be inserted:"<<endl;
                cin>>val;
                cout<<"Enter the position:"<<endl;
                cin>>pos;
                insertionatspec(val, pos);
                traverse();
                break;
            case 4: 
                cout<<"Traversing"<<endl;
                traverse();
                break;
            case 5:
                cout<<"Deletion at beginning"<<endl;
                deletionatbeg();
                traverse();
                break;  
            case 6:
                cout<<"Deletion at end"<<endl;
                deletionatend();
                traverse();
                break;
            case 7:
                cout<<"Enter the position where you want to delete:"<<endl;
                cin>>pos;
                deletionatspec(pos);
                traverse();
                break;
            case 8:
                exit(0);
        }
    }
    
    return 0;
}
