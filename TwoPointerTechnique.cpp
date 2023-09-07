#include<iostream>
using namespace std;
bool isPair(int arr[],int n,int x)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
        {
            return true;
        }
        else if(arr[i]+arr[j]<x)
        {
            i++;
        }
        else
            j--;
    }
    return false;
}
int main()
{
    int arr[]={5,6,7,8,10,13,14};
    int n=7,x;
    cout<<"Enter the sum to be obtained within the array:\n";
    cin>>x;
    cout<<isPair(arr,n,x);

}

output:

Enter the sum to be obtained within the array:
15
1
