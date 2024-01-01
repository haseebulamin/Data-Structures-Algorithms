#include<iostream>
using namespace std;
int Queue[0],size,rear=-1,front =-1;

void line();
void Size();
void Enqueue(int value);
void Dequeue();
void Display();
void isFull();
void isEmpty();
void search();
void sort();
int main()
{
    int option, value;
    Size();
    jump:
    line();
    cout<<"1 for enqueue. "<<endl;
    cout<<"2 for dequeue. "<<endl;
    cout<<"3 for display. "<<endl;
    cout<<"4 for check queue full. "<<endl;
    cout<<"5 for check queue empty. "<<endl;
    cout<<"6 for search queue. "<<endl;
    cout<<"7 for sort queue. "<<endl;
    cout<<"8 for exit"<<endl;
    cout<<"Enter your Number:  ";
    cin>>option;
    switch (option)
    {
    case 1:
        line();
        cout<<"Enter a value for enqueue: ";
        cin>>value;
        Enqueue(value);
        cout<<"Queue enqueued."<<endl;
        goto jump;
    case 2:
        line();
        Dequeue();
        goto jump;
    case 3:
        line();
        Display();
        goto jump;
    case 4:
        line();
        isFull();
        goto jump;
    case 5:
       line();
       isEmpty();
        goto jump;
    case 6:
       line();
        search();
        goto jump;
    case 7:
       line();
       sort();
        goto jump;
    case 8:
        cout<<"Exit.";
        break;
    default:
        cout<<"You entered an invalid number.";
        break;
    }
    return 0;
}
void line(){
    for (int i = 0; i < 40; i++)
    {
        cout<<"-";
    }
    cout<<endl;
}
void Size()
{
    cout<<"Enter Queue Size: ";
    cin>>size;
}
void Enqueue(int value)
{
    if(rear == size-1 )
    {
        cout<<"Queue is full"<<endl;
    }
    else{
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        Queue[rear] = value;
    }
}
void Dequeue()
{
   if(front == -1 || front > rear )
   {
    cout<<"Queue is empty";
   }
   else{
    cout<<"Dequeue element is "<<Queue[front]<<endl;
    front++;
   }
}
void Display(){
 for (int i = front; i <=rear; i++)
 {
    cout<<Queue[i]<<" ";
 }
 cout<<endl;
}
void isFull(){
    if(rear == size-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else{
        cout<<"Queue is not full";
    }
}
void isEmpty(){
    if(front == -1 || front > rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty";
    }
}
void search()
{
    int loc = -1;
    int value;
    cout<<"Enter Element for search: ";
    cin>>value;
    for (int i = front; i <= rear; ++i)
    {
        if (Queue[i] == value)
        {
            loc = i;
            cout<<"Element found in the queue"<<endl;
        }
    }
    if(loc == -1)
    {
        cout<<"Element not found in the queue"<<endl;
    }
}
void sort()
{
    cout<<"Sorting is not applicable for a queue."<<endl;
}