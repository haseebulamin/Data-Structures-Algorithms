// Create a lInked list and traversal 
#include <iostream>
using namespace std;
// struct for node
struct node
{
    int data;
    struct node *next;
};
// for create list
void createList(struct node* first,struct node* second,struct node* third){
    first->data = 77;
    first->next = second;

    second->data = 55;
    second->next = third;

    third->data = 99;
    third->next = NULL;
} 
// for traversing
void DisplayList(struct node* ptr)
{
    while (ptr!=NULL)
    {
        cout<<"Data: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    struct node *first = new node;
    struct node *second = new node;
    struct node *third = new node;
    createList(first,second,third);
    DisplayList(first);
    return 0;
}
