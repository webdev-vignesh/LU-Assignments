// Binary search tree menu driven program
#include <iostream>
using namespace std;

class node {
    public:
    node *left;
    int data;
    node *right;
};

node *root = NULL;

int minVal(node *root) {
    int min = root->data;
    while(root->left != NULL)
    {
        min = root->left->data;
        root = root->left;
    }
    return min;
}

node *insert(node *root, int val )
{
    if(root == NULL)
    {
        node *p = new node;
        p->data = val;
        p->left = NULL;
        p->right = NULL;
        return p;
    }
    else if(val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else 
    {
        root->right = insert(root->right, val);
    }
    return root;
}


node *deleteNode(node *root, int val)
{
    if(root == NULL)
    {
        return root;
    }
    if(val < root->data)
    {
        root->left = deleteNode(root->left, val);
        return root;
    }
    else if(val > root->data)
    {
        root->right = deleteNode(root->right, val);
        return root;
    }
    if(root->right == NULL)
    {
        node *temp = root->left;
        delete(root);
        return temp;
    }
    else if(root->left == NULL)
    {
        node *temp = root->right;
        delete(root);
        return temp;
    }
    else 
    {
        root->data = minVal(root->right);
        root->right = deleteNode(root->right, root->data);
        return root;
    }
}
void preorder(node *root)
{   
    if(root != NULL)
    {
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
    }
}

void inorder(node *root)
{   
    if(root != NULL)
    {
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
    }
}

void postorder(node *root)
{   
    if(root != NULL)
    {
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
    }
}

node *search(node *root, int val)
{
    if (root == NULL)
        return NULL;
    if(root->data == val)
        return root;
    else if(val < root->data)
        return search(root->left , val);
    else 
        return search(root->right, val);
}

int main() {
    deleteNode(root, 32);
    
    preorder(root);
    
    int choice, val;
    node *temp;
    cout<<"Menu driven program:"<<endl;
    cout<<"Enter your choice: \n1 for insertion \n2 for preorder traversal \n3 for inorder traversal \n4 for postorder traversal \n5 for deletion \n6 for searching \n7 for exit\n";   

    while(1)
    {
    cout<<"Enter your chocie:\n";
    cin>>choice;
    switch(choice)
    {
        case 1: 
            cout<<"Enter the value to be inserted:\n";
            cin>>val;
            root = insert(root, val);
            break;
        case 2: 
            cout<<"Preorder traversal:\n";
            preorder(root);
            break;
        case 3: 
            cout<<"Inorder traversal:\n";
            inorder(root);
            break;
        case 4: 
            cout<<"Postorder traversal:\n";
            postorder(root);
            break;
        case 5: 
            cout<<"Enter the value to be deleted:\n";
            cin>>val;
            root = deleteNode(root, val);
            break;
        case 6: 
            cout<<"Enter the value to be searched:\n";
            cin>>val;
            temp = search(root, val);
            if(temp != NULL)
            cout<<"element found\n";
            else
            cout<<"element not found\n";
            break;
        case 7:
            exit(0);
    }
    }
    
    return 0;
}
