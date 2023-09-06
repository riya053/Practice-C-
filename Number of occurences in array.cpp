#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<x)
        {
            low=mid+1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else{
            if(mid==0||arr[mid-1]!=arr[mid])
            {
                return mid;
            }
            else
                high=mid-1;
        }
    }
    return -1;
}
int lastocc(int arr[],int n,int x)
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
            if(mid==0||arr[mid+1]!=arr[mid])
            return mid;
            else
                low= mid+1;
        }
    }
    return -1;
}

int countocc(int arr[],int n,int x)
{
    int first=firstocc(arr,n,x);
    if(first==-1)
    {
        return 0;
    }
    else
    {
        return lastocc(arr,n,x)-first+1;
    }


}
int main()
{
    int arr[]={5,5,5,10,10,15,15,20};
    int n=8,x;
    cout<<"Enter the element of which index to be obtained:\n";
    cin>>x;
    cout<<countocc(arr,n,x);
}

output:

Enter the element of which index to be obtained:
5
3
