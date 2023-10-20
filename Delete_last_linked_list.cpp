// delete last node form linked list
#include<iostream>
using namespace std;
//struct for node
struct node
{
    int data;
    node *next;
};
// for last deletion 
void delete_last(node **start)
{
    if(*start==NULL)
    {
        cout<<"Linked list Underflow.";
    }
    else{
        node *temp = *start;
        while (temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
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
    node *start = new node();
    node *second = new node();
    start->data=76;
    start->next=second;
    second->data=54;
    second->next=NULL;
    cout << "Original list: ";
    displayList(start);
    delete_last(&start);
    cout<<endl;
    cout << "List after deleted the last node: ";
    displayList(start);

    return 0;
}