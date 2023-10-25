// reverse in Linked list 
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
    first->data=31;
    first->next=second;
    second->data=54;
    second->next=third;
    third->data=95;
    third->next=NULL;
}
// for reverse in linked list
void reverse(node *&first)
{
node *pre = NULL;
node *current = first;
while (current != NULL)
{
    node *next = current->next;
    current->next = pre;
    pre = current;
    current = next;
}
 first = pre;
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
    node *first = new node();
    node *second = new node();
    node *third = new node();
    createList(first,second,third);
    displayList(first);
    reverse(first);
    cout<<endl;
    displayList(first);
    return 0;
}