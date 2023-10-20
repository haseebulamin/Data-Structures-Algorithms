// insert value in first in linked list
#include<iostream>
using namespace std;
// struct for linked list 
struct node
{
    int data;
    node *next;
};

// for insertion
void insert_First(node **start,int value)
{
 if(*start==NULL)
 {
    node *first = new node();
    first->data=value;
    first->next=NULL;
    *start = first;
 }
 else
 {
    node *first = new node();
    first->data=value;
    first->next=*start;
    *start = first;
 }
}
// display
void display(node *ptr)
{
 while (ptr!=NULL)
 {
    cout<<ptr->data<<" ";
    ptr =ptr->next;
 }
}
int main()
{
    node *start = NULL;
    insert_First(&start,55);
    insert_First(&start,32);
    insert_First(&start,89);
    display(start);
    return 0;
}