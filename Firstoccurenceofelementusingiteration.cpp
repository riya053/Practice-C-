#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            if(mid==0||arr[mid-1]!=arr[mid])
            return mid;
            else
                high=mid-1;
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
    cout<<firstocc(arr,8,x);
}

output:

Enter the element of which index to be obtained:
10
3

Enter the element of which index to be obtained:
5
0

Enter the element of which index to be obtained:
7
-1
