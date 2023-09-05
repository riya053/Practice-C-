#include<iostream>
using namespace std;
int bsearch(int arr[],int low,int high,int x)
{
   if(low>high)
        return -1;
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            return bsearch(arr,mid+1,high,x);
        }
        else
        {
            return bsearch(arr,low,mid-1,x);
        }
    }
int main()
{
    int arr[]={2,3,6,7,8,94,105,110,112},x;
    int n=7;
    cout<<"Enter the element to search in array:\n";
    cin>>x;
    cout<<bsearch(arr,0,n-1,x);



}


output:
Enter the element to search in array:
105
6
