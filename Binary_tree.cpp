#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
    Node(int key)
    {
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int value){
    if (root == nullptr)
    {
        return new Node(value);
    }
    if (root->left == nullptr)
    {
        root->left = insert(root->left, value);
    }
    else if(root->right == nullptr)
    {
        root->right = insert(root->right, value);
    }
    else
    {
         root->left = insert(root->left, value);
    }
    
    return root;
}
void traversal(Node* root)
{
    if (root != nullptr)
    {
        traversal(root->left);
        cout<<root->data<<" ";
        traversal(root->right);
    }
    
}
int main(){
	Node* root = nullptr;
    root = insert(root,9);   
    insert(root,5);   
    insert(root,3);   
    insert(root,2);   
    insert(root,6);   
    insert(root,8);
    insert(root,10);
    insert(root,23);
    cout<<"inOrder traversal: ";
    traversal(root);
	return 0;
}