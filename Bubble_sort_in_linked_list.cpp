// delete last node form linked list
#include<iostream>
using namespace std;
//struct for node
struct node
{
    int data;
    node *next;
};
// for bubble sorting 
void bubbleSort(node **start)
{
    if(*start==NULL)
    return;
    int temp;
     bool swapped;
     node *first;
     node *second = NULL;
     do{
        swapped = false;
        first = *start;
        while (first->next != second)
        {
            if(first->data > first->next->data)
            {
                temp = first->data;
                first->data = first->next->data;
                first->next->data = temp;
                swapped = true;
            }
            first = first->next;
        }
        second = first;
     }while (swapped);
    
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
    node *third = new node();
    node *forth = new node();
    start->data=8;
    start->next=second;
    second->data=5;
    second->next=third;
    third->data=4;
    third->next=forth;
    forth->data=2;
    forth->next=NULL;
    cout << "Original list: ";
    displayList(start);
    bubbleSort(&start);
    cout<<endl;
    cout << "List after Bubble sorting: ";
    displayList(start);

    return 0;
}