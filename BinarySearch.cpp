#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
            high=mid-1;
        }
        return -1;
    }
int main()
{
    int arr[]={2,3,6,7,8,94},x;
    int n;
    cout<<"Enter the element to search in array:\n";
    cin>>x;
    cout<<bsearch(arr,6,x);



}

output:

Enter the element to search in array:
8
4
