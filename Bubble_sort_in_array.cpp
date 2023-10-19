// Bubble sorting in array
#include<iostream>
using namespace std;

int main()
{
    int temp, size = 7;
    int arr[size] = {5,3,8,9,1,6,2};
    // for original array
    cout<<"Element of original array are: "<<endl;
    for(int i=0; i<size; i++)
    {
     cout<<arr[i]<<" ";
    }
    cout<<endl;
    // for bubble sorting 
    for(int i=0; i<size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        } 
    } 
    // for new array
    cout<<"Element of bubble sorted array are: "<<endl;
    for(int i=0; i<size; i++)
    {
     cout<<arr[i]<<" ";
    }
    return 0;
}