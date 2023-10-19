//simple array in DSA in c++
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int a[size];
    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<size; i++)
    {
     cin>>a[i];
    }
    cout<<"Element of array are: "<<endl;
    for(int i=0; i<size; i++)
    {
     cout<<a[i]<<" ";
    }
    return 0;
}