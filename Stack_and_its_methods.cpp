// Stack and its methods 
#include<iostream>
using namespace std;

// initialize a stack with array
int stack[10], size, top =-1;

// functions prototypes
void line();
void stackSize();
void push(int value);
void pop();
void peek();
void isFull();
void isEmpty();

// main function
int main()
{
    int option, value;
    stackSize();
    jump:
    line();
    cout<<"1 for stacK push. "<<endl;
    cout<<"2 for stacK pop. "<<endl;
    cout<<"3 for stacK peek. "<<endl;
    cout<<"4 for check stacK full. "<<endl;
    cout<<"5 for check stacK empty. "<<endl;
    cout<<"6 for exit"<<endl;
    cout<<"Enter your Number:  ";
    cin>>option;
    switch (option)
    {
    case 1:
        line();
        cout<<"Enter a value for push: ";
        cin>>value;
        push(value);
        cout<<"Stack pushed."<<endl;
        goto jump;
    case 2:
        line();
        pop();
        goto jump;
    case 3:
        line();
        peek();
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
        cout<<"Exit.";
        break;
    default:
        cout<<"You entered invalid number.";
        break;
    }
    return 0;
}

// for stack size
void stackSize()
{
    cout<<"Enter stack size: ";
    cin>>size;
}

// for create line
void line()
{
    for (int i = 0; i < 40; i++)
    {
        cout<<"-";
    }
    cout<<endl;
}

// for stack push
void push(int value)
{
    if(top >= size-1)
    {
        cout<<"Stack is overflow."<<endl;
    }
    else{
        top++;
        stack[top]=value;
    }
}

// for stack pop
void pop()
{
    if(top<=-1)
    {
        cout<<"Stack is underflow."<<endl;
    }
    else{
        cout<<"The popped element is "<<stack[top]<<endl;
        top--;
    }
}

// for stack peek 
void peek()
{
 if(top>=0)
 {
 for(int i=top; i>=0; i--)
 {
    cout<<stack[i]<<endl;
 }
 }
 else{
    cout<<"Stcak has no data."<<endl;
 }
}

// for check stacK full
void isFull()
{
    if(top==size)
    {
        cout<<"Stack is full."<<endl;
    }
    else{
        cout<<"Stack is not full."<<endl;
    }
}

// for check stacK empty
void isEmpty()
{
    if(top==-1)
    {
        cout<<"Stack is empty."<<endl;
    }
    else{
        cout<<"Stack is not empty."<<endl;
    }
}