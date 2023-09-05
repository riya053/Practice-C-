#include<iostream>
using namespace std;
int lastocc(int arr[],int low,int high,int x,int n)
{
    {
        if(low>high)
        return -1;
    
        int mid=(low+high)/2;
        if(arr[mid]>x)
        {
            return lastocc(arr,low,mid-1,x,n);
        }
        else if(arr[mid]<x)
        {
            return lastocc(arr,mid+1,high,x,n);
        }
        else
        {
            if(mid==0||arr[mid-1]!=arr[mid])
            return mid;
            else
                return lastocc(arr,mid+1,high,x,n);
        }
    }
    return -1;
}
int main()
{
    int arr[]={5,5,5,10,10,15,15,20};
    int n=8,x;
    cout<<"Enter the element of which index to be obtained:\n";
    cin>>x;
    cout<<lastocc(arr,0,n-1,x,n);
}

output:

Enter the element of which index to be obtained:
20
7
