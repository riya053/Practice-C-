#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers to find their greatest common divisor: \n";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
