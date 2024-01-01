// Search in Linked list 
#include<iostream>
using namespace std;
// struct for node 
struct node
{
    int data;
    struct node *next;
};
// for create linked list 
void createList(node *first,node *second,node *third)
{
    first->data=65;
    first->next=second;
    second->data=44;
    second->next=third;
    third->data=98;
    third->next=NULL;
}
// for search in linked list
void searchList(node *first,int value)
{
node *temp = first;
bool found = false;
  while(temp!=NULL)
  {
    if(temp->data==value)
    {
        cout<<"Value found and value is "<<temp->data;
        found = true;
        break;
    }
    else
    {
     temp = temp->next;
    }
  }
  if(!found)
    {
     cout<<"Value not found.";
    }
}
int main()
{
    node *first = new node();
    node *second = new node();
    node *third = new node();
    createList(first,second,third);
    int value;
    cout<<"Enter a value you wanna search in list: ";
    cin>>value;
    searchList(first,value);
    return 0;
}