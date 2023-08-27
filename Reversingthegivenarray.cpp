#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,8,6,5,7};
    cout<<"Reversing the array"<<endl;
    int start=0,end=4;
    while(start<end)
    {   int temp=A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<5;i++)
    {
        cout<<A[i];
            }
}

output:
Reversing the array
75682
