#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter a size of Array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter a elements in array.\n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    // Selection sort 
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
           if (arr[j]<arr[i])
           {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
           } 
        }
    }
    cout<<"Selection sort array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}