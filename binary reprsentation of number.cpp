#include<iostream>
using namespace std;
int main()
{
    int binarynumber=0,i=1,n;
    cout<<"Enter the value of n to which binary has to obtain:\n";
    cin>>n;
    while(n!=0)
    {
        int remain=n%2;
        binarynumber=binarynumber+remain*i;
        n=n/2;
        i=i*10;

    }
    cout<<"Binary representation of the number is:\n";
    cout<<binarynumber;
}


output:

Enter the value of n to which binary has to obtain:
55
Binary representation of the number is:
110111
