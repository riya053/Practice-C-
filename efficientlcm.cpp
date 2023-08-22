#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cout<<"enter two numbers:\n";
    cin>>a>>b;
    cout<<"lcm of two numbers:\n";
    cout<<lcm(a,b);
}

output:
enter two numbers:
23
24
lcm of two numbers:
552
PS C:\Users\Dell\Desktop\coding\C++>
