#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,1,2,3,4,5};
    char ch[6]="abcde";
    cout<<arr<<endl;
    cout<<ch<<endl;
   char *c=&ch[0];
   cout<<c<<endl;\\it will print the string not address
   int *p=&arr[0];
   cout<<p;


    }

outpu:
0x61fef0
abcde
abcde
0x61fef0
