#include<iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i = start-1;
    for (int j = start; j <end; j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,end);
    return i+1;
}
void quikSort(int arr[], int start, int end)
{
    if (start<end)
    {
        int p = partition(arr,start,end);
        quikSort(arr,start,p-1);
        quikSort(arr,p+1,end);
    }
}
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
    quikSort(arr,0,size-1);
    cout<<"Quick sort array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}