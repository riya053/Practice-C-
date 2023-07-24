#include<iostream>
using namespace std;
unsigned int factorialofnumber(unsigned int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    return n*factorialofnumber(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number to obtain the factorial of number \n";
    cin>>n;
    cout<<"Factorial of a number is:\n"<<factorialofnumber(n);
}

ouput:

Enter the number to obtain the factorial of number 
8
Factorial of a number is:
40320
