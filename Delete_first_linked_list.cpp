// delete first node form linked list
#include<iostream>
using namespace std;
//struct for node
struct node
{
    int data;
    node *next;
};
// for first deletion 
void delete_first(node **start)
{
    if(*start==NULL)
    {
        cout<<"Linked list underflow";
    }
    else{
         node *temp = *start;
        *start = (*start)->next;
         delete temp;
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
    second->next-NULL;
    cout << "Original list: ";
    displayList(start);
    delete_first(&start);
    cout<<endl;
    cout << "List after deleted the first node: ";
    displayList(start);

    return 0;
}