#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* front = nullptr;
Node* rear = nullptr;
void line();
void enqueue();
void dequeue();
void display();
void queueSize();
void isEmpty();
void search();
void sort();
int main()
{
   int option, value;
    jump:
    line();
    cout << "1 for enqueue. " << endl;
    cout << "2 for dequeue. " << endl;
    cout << "3 for display. " << endl;
    cout << "4 for check queue empty. " << endl;
    cout << "5 for search queue. " << endl;
    cout << "6 for sort queue. " << endl;
    cout << "7 for exit" << endl;
    line();
    cout << "Enter your Number: ";
    cin >> option;
    switch (option) {
        case 1:
            line();
            enqueue();
            cout << "Queue enqueued." << endl;
            goto jump;
        case 2:
            line();
            dequeue();
            goto jump;
        case 3:
            line();
            display();
            goto jump;
        case 4:
            line();
            isEmpty();
            goto jump;
        case 5:
            line();
            search();
            goto jump;
        case 6:
            line();
            sort();
            goto jump;
        case 7:
            cout << "Exit.";
            break;
        default:
            cout << "You entered an invalid number.";
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
void isEmpty(){
    if(front == nullptr)
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty";
    }
}
void enqueue(){
    int value;
    cout<<"Enter value for enqueue: ";
    cin>>value;
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (front == nullptr)
    {
        rear = front = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode;
    } 
}
void dequeue(){
    if (front == nullptr)
    {
        cout<<"Queue is empty.\n";
    }
    else{
        Node* temp = front;
        cout<<"Dequeue elelmenet is: "<<temp->data<<endl;
        front = front->next;
        delete temp;
        if (front == nullptr)
        {
            rear = nullptr;
        }
    }
}
void display(){
    if (front != nullptr)
    {
        Node* ptr = front;
        cout<<"Elements in Queue: ";
        while (ptr != nullptr)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    }
    cout<<endl;
}
void search(){
    int loc = -1,value;
    cout<<"Enter value for enqueue: ";
    cin>>value;
    Node* temp = front;
    int i =0;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            loc = i;
            cout<<"Elemen found in Queue."<<endl;
            break;
        }
        temp = temp->next;
        i++;
    }
    if (loc == -1)
    {
       cout<<"Element not found in Queue."<<endl;
    }
}
void sort()
{
    cout<<"Sorting is not applicable for a queue."<<endl;
}