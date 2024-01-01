// simple create and display (traverse) in doubly linked list
#include<iostream>
using namespace std;
// struct for node 
struct node
{
    int data;
    node *pre;
    node *next;
};
// for display node 
void displayDLL(node *ptr)   // DLL ----> doubly linked list
{
  while (ptr != NULL)
  {
    cout<<ptr->data<<" ";
    ptr = ptr->next;
  }
  
}
int main()
{
    node *first = new node();
    node *second = new node();
    node *third = new node();

    first->data = 76;
    first->pre = NULL;
    first->next = second;

    second->data = 32;
    second->pre = first;
    second->next = third;

    third->data = 51;
    third->pre = second;
    third->next = NULL;


    displayDLL(first);
    return 0;
}