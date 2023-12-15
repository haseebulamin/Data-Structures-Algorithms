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
    // insertion sort 
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i-1;
        while (arr[j] > current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    cout<<"Insertion sort array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}