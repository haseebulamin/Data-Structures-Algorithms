// insart a vlaue in last in linked list
#include<iostream>
using namespace std;
// struct for node
struct node
{
   int data;
   node *next;
};
//for insertion in last 
void insert_last(node **start, int value)
{
    node *newNode = new node();
    newNode->data=value;
    newNode->next=NULL;
    if(*start==NULL)
    {
        *start = newNode;
    }
    else{
        node *temp = *start;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
// for display linked list
void displayList(node *ptr)
{
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
int main()
{
    node *start = NULL;
    insert_last(&start,66);
    insert_last(&start,32);
    insert_last(&start,87);
    displayList(start);
    return 0;
}