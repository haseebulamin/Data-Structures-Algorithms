// middle point in Linked list 
#include<iostream>
using namespace std;
// struct for node 
struct node
{
    int data;
    struct node *next;
};
// for create linked list 
void create(node **start)
{
 int size;
 cout<<"How many number you wanna store: ";
 cin>>size;
 for (int i = 0; i < size; i++)
 {
int value;
 cout<<"Enter a value to store in node: ";
 cin>>value;
    node *first = new node();
    first->data=value;
    first->next=*start;
    *start = first;
 }
 cout<<size<<" Values stored into Node."<<endl;
 
}
// for middle in linked list
void middle_point(node *first)
{
    if (first == NULL)
    {
       cout<<"List is empty.";
    }
    else{
        node *start = first;
        node *end = first;
        while (end && end->next)
        {
            start = start->next;
            end = end->next->next;
        }
    cout<<start->data;
    }
    
}
// for display list
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
    node *first = NULL;
    create(&first);
    cout<<"Original list: \n";
    displayList(first);
    cout<<"/alue at middle of list: ";
    middle_point(first);
    return 0;
}