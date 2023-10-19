// merge two arrays in one array
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int brr[] = {10,20,30};
    // for check size of arrays
    int al = sizeof(arr)/sizeof(arr[0]);
    int bl = sizeof(brr)/sizeof(brr[0]);
    // for 1st array
     cout<<"Element of 1st array are: "<<endl;
    for(int i=0; i<al; i++)
    {
     cout<<arr[i]<<" ";
    }
    cout<<endl;
    // for 2nd array
     cout<<"Element of 2nd array are: "<<endl;
    for(int i=0; i<bl; i++)
    {
     cout<<brr[i]<<" ";
    }
    cout<<endl;
    int cl = al+bl;
    int crr[cl];
    // for merge one array
    for (int i = 0; i < al; i++)
    {
        crr[i] = arr[i]; 
    }
    // for merge one array
    for (int i = 0; i < bl; i++)
    {
        crr[al+i] = brr[i]; 
    }
     // for merged array
     cout<<"Element of Merged array are: "<<endl;
    for(int i=0; i<cl; i++)
    {
     cout<<crr[i]<<" ";
    }
    return 0;
}