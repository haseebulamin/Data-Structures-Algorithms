// insert a value in at any index 
#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {7,6,3,9,5};
    int num, index, size=5,range=10;
    // for original array
    cout<<"Element of original array are: "<<endl;
    for(int i=0; i<size; i++)
    {
     cout<<arr[i]<<" ";
    }
    cout<<endl;
    // for check range of array
    if(size>=range)
    {
        cout<<"You cannot insert because array is full.";
    }
    // now insert value
    cout<<"Enter index number you wanna insert: ";
    cin>>index;
    cout<<"Enter number you wanna insert: ";
    cin>>num;
    for(int i = size-1; i>=index;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = num;
    size += 1;
    // for new array
    cout<<"Element of modified array are: "<<endl;
    for(int i=0; i<size; i++)
    {
     cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}