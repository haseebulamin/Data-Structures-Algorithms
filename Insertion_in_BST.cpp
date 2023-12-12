#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int key) // constructor
    {
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int value){
    if (root == nullptr) // if root is null
    {
        return new Node(value);
    }

    if (value < root->data)  // if value is less than root's data
    {
        root->left = insert(root->left, value);
    }
    else if(value > root->data)  // if value is greater than root's data
    {
        root->right = insert(root->right, value);
    }

    return root;
}

void inOrderTraversal(Node* root){
    if (root != nullptr)
    {
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
    }
    
}
int main()
{
    Node* root = nullptr;
    root = insert(root,9);   
    insert(root,5);   
    insert(root,3);   
    insert(root,2);   
    insert(root,6);   
    insert(root,8);
    inOrderTraversal(root);      
    return 0;
}