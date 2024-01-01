// insert value in first in doubly linked list
#include<iostream>
using namespace std;
// struct for node
struct node
{
    int data;
    node *pre;
    node *next;
};

// for insert first in DLL
void insert_first(node **start)
{
    int value;
    cout<<"Enter a value you insert: ";
    cin>>value;
    if((*start)==NULL)
    {
        node *temp = new node();
        temp->data = value;
        temp->pre = NULL;
        temp->next = NULL;
        *start = temp;
    }
    else{
        node *temp =  new node();
        temp->data = value;
        temp->pre = NULL;
        temp->next = *start;
        *start = temp;
    }
}

// for display node
void displayDLL(node *ptr)  // DLL ----> doubly linked list
{
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    
}
int main()
{
    node *start = NULL;
    insert_first(&start);
    insert_first(&start);
    insert_first(&start);
    displayDLL(start);
    return 0;
}