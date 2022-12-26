// Binary Search tree using Linked List
#include <iostream>
using namespace std;

class node{
    public:
    node *left;
    int data;
    node *right;
};

node *root = NULL;

node* insert(node *root,int val)
{       
    if(root == NULL)
    {
        node *p = new node;
        p->data = val;
        p->left = NULL;
        p->right = NULL;
        return p;
    }
    else if(val< root->data)
    {
        root->left = insert(root->left, val);
    }
    else 
    {
        root->right = insert(root->right, val);
    }
    return root;
}

void preorder(node *root)
{   
    if(root!=NULL)
    {
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
    }
}

void inorder(node *root)
{   
    if(root!=NULL)
    {
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
    }
}

void postorder(node *root)
{   
    if(root!=NULL)
    {
    postorder(root->left);
    postorder(root->right);
        cout<<root->data<<"\t";
    }
}

int main() {

    node *root = insert(NULL, 25);    
    insert(root, 11);
    insert(root, 30);
    insert(root, 17);
    insert(root, 84);
    insert(root, 42);
    insert(root, 58);
    
    cout<<"Binary Search Tree Preorder:"<<endl;
    preorder(root);
        
    cout<<"\nBinary Search Tree Inorder:"<<endl;
    inorder(root);
    
    cout<<"\nBinary Search Tree Postorder:"<<endl;
    postorder(root);
    
    return 0;
}
