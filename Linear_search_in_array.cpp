// Linear search in array 
#include<iostream>
using namespace std;

int main(){
    int a[5] = {7,6,3,9,5};
    int num, id=-1;
    cout<<"Enter number you wanna search: ";
    cin>>num;
    for (int i = 0; i<5; i++)
    {
        if(a[i]==num)
        {
            id=i;
        }
    }
    if (id==-1)
    {
        cout<<"Number not found.";
    }
    else{
        cout<<"Number found at index of: "<<id;
    }
    return 0;
}