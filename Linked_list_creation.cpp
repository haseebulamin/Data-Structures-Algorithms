// Create a lInked list and traversal 
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void DisplayList(struct node* ptr)
{
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    
}
int main()
{
    struct node *first = new node;
    struct node *second = new node;
    struct node *third = new node;
    
    first->data = 77;
    first->next = second;

    second->data = 55;
    second->next = third;

    third->data = 99;
    third->next = NULL;

   DisplayList(first);
   
   
    return 0;
}
