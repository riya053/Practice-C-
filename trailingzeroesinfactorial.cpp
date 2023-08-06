#include<iostream>
using namespace std;
int findtrailingzeroes(int n)
{
    if(n<0)
    return -1;
    int count=0;
    for(int i=5;i<=n;i*=5)
    {
        count = count + (n/i);

       
    }
     return count;
}

int main()
{    int n;
    cout<<"Enter the number in which factorial to find trailing zeroes:\n";
    cin>>n;
    cout<<"the number of trailing zeroes is:"<<findtrailingzeroes(n);

    return 0;

}
