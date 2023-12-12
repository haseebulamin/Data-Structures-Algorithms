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
void preOrderTraversal(Node* root){
    if (root != nullptr)
    {
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    }
    
}
void postOrderTraversal(Node* root){
    if (root != nullptr)
    {
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
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
    insert(root,10);
    insert(root,23);
    cout<<"preOrder traversal: ";
    preOrderTraversal(root);
    cout<<endl;
    cout<<"inOrder traversal: ";
    inOrderTraversal(root);
    cout<<endl;
    cout<<"postOrder traversal: ";
    postOrderTraversal(root);
    return 0;
}