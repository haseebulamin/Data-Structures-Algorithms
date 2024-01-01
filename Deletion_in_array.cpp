// delete a value in array 
#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {7,6,3,9,5};
    int index, size=5,range=10;
    // for original array
    cout<<"Element of original array are: "<<endl;
    for(int i=0; i<size; i++)
    {
     cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter index number you wanna delete value: ";
    cin>>index;
    // for delete a value
    for (int i = index; i <= size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size -=1;
    // for new array
    cout<<"Element of modified array are: "<<endl;
    for(int i=0; i<size; i++)
    {
     cout<<arr[i]<<" ";
    }
    return 0;
}