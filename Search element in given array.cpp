#include <iostream>
#include <cmath>
using namespace std;

int search(int arr[], int n, int x)
{
		for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                return i;
            }
        }
        return -1;
} 


    
int main() {
	
    int arr[]={20,5,4,23,3};
   
    int x;
    cout<<"Enter the element to search in array:";
    cin>>x;
    cout<<search(arr,5,x);
}

output:

Enter the element to search in array:5
1
