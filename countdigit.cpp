#include<iostream>
using namespace std;
int countdigit(long long n)
{
    if(n==0)
    return 1;
    int count=0;
    while(n!=0)
    {
        n=n/10;
        ++count;
    }
    return count;
}
int main(void)
{
    long long n;
    cout<<"Enter the number whose digit is to be count"<<endl;
    cin>>n;
    cout<<"Number of digits \n "<<countdigit(n);
   
    return 0;
}


output:

Enter the number whose digit is to be count
8765345
Number of digits 
 7
