// Binary search in array
#include<iostream>
using namespace std;

int main()
{
    int a[5] = {7,6,3,9,5};
    int num, id=-1,start=0,end=4,mid;
    cout<<"Enter number you wanna search: ";
    cin>>num;
    while (start<=end)
    {
        mid = (start+end)/2;
        if(a[mid]==num)
        {
            id=mid;
            break;
        }
        else if (num>a[mid])
        {
          start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    if (id==-1)
    {
        cout<<"Number not found.";
    }
    else{
        cout<<"Number found at index of: "<<id;
    }
    return 0;
}