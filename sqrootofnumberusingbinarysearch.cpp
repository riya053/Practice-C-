#include<iostream>
using namespace std;
int sqrootfloor(int x)
{
    int low=1,high=x,ans=-1;;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==x)
            return mid;
        else if(msq>x)
        {
            high=mid-1;
        
        }
        else
        {
            low=mid+1;
            ans=mid;        }
             

    }
    return ans;
    

}
int main()
{
    int x;
    cout<<"Enter the number of which sqroot has to obtain:\n";
    cin>>x;
    cout<<"Square root of number is:\n";
    cout<<sqrootfloor(x);
}

output:
Enter the number of which sqroot has to obtain:
1225
Square root of number is:
35
