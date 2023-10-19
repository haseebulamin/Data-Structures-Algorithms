// Programme of array to take five numbers from user and and find maximum
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
    // for maximum
    int max = a[0];
    for(int i=0; i<5; i++)
    {
     if(a[i]>max)
     {
        max = a[i];
     }
    }
    cout<<"\nMaximum element is array is: "<<max;
    return 0;
}