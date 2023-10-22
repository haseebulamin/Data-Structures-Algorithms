// insert value at last in doubly linked list
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
void insert_last(node **start)
{
    int value;
    cout<<"Enter a value you insert last: ";
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
        node *ptr = *start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        node *temp = new node();
        temp->data = value;
        temp->next = NULL;
        temp->pre = ptr;
        ptr->next = temp;
        
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
    insert_last(&start);
    insert_last(&start);
    insert_last(&start);
    displayDLL(start);
    return 0;
}