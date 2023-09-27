#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mindiff(int arr[],int size)
{
    sort(arr,arr+size);
    int result=INT_MAX;
    for(int i=1;i<size;i++)
    {
        result=min(result,abs(arr[i]-arr[i-1]));
    }
    return result;

}
int main()
{
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Minimum difference is:\n";
    cout<<mindiff(arr,size);
}

Solution:
Enter size of array5
Enter array elements
45
34
23
14
11
Minimum difference is:
3
