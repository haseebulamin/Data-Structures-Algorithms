#include<iostream>
using namespace std;
void merge(int arr[], int start, int mid, int end){
    int a1 = mid-start+1;
    int b1 = end-mid;
    int a[a1];
    int b[b1];
    for (int i = 0; i < a1; i++)
    {
        a[i] = arr[start+i];
    }
    for (int i = 0; i < b1; i++)
    {
        b[i] = arr[mid+1+i];
    }
    int i=0, j=0, k=start;
    while (i<a1 && j<b1)
    {
        if(a[i]<b[j])
        {
            arr[k]  = a[i];
            k++; i++;
        }
        else{
            arr[k]  = b[j];
            k++; j++;
        }
    }
    while (i<a1)
    {
        arr[k]  = a[i];
        k++; i++;
    }
    while (j<b1)
    {
        arr[k]  = b[j];
        k++; j++;
    }
    
    
}
void mergeSort(int arr[], int start, int end)
{
    if (start<end)
    {
        int mid = (start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
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
    mergeSort(arr,0,size);
    cout<<"Merge sort array.\n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}