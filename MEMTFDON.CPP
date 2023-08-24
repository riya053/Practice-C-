#include<iostream>
using namespace std;
void printdivisors(int n)
{
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        cout<<i<<endl;
    }
    for( ;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<(n/i)<<endl;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    printdivisors(n);
}

output:
Enter the number :100
1
2
4
5
10
20
25
50
100
