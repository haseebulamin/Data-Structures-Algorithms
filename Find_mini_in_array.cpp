// Programme of array to take five numbers from user and and find minimum
#include<iostream>
using namespace std;

int main()
{
    int a[5];
    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<5; i++)
    {
     cin>>a[i];
    }
    cout<<"Element of array are: "<<endl;
    for(int i=0; i<5; i++)
    {
     cout<<a[i]<<" ";
    }
    // for minimum
    int min = a[0];
    for(int i=0; i<5; i++)
    {
     if(a[i]<min)
     {
        min = a[i];
     }
    }
    cout<<"\nMinimum element is array is: "<<min;
    return 0;
}