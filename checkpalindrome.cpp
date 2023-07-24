#include<iostream>
using namespace std;
bool ispalindrome(int n)
{
    int reverse=0;
    int temp=n;
    while(temp!=0)
    {
        reverse=(reverse*10)+(temp%10);
        temp=temp/10;
    }
    return(reverse==n);
}
int main()
{
    int n;
    cout<<"Enter the number to check if it is palindrome or not:\n";
    cin>>n;
    if(ispalindrome(n)==1)
    {
        cout<<"yess \n";
    }
    else
    {
        cout<<"No \n";
    }
    return 0;
}

output:
Enter the number to check if it is palindrome or not:
78987
yess 
