#include<iostream>
using namespace std;
int main(){
    int arr[10]={75,89,75,188};
    cout<<"address of first block is:"<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"address of first block is" << &arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<(*arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<  "6th" <<arr[3]<<endl;
    cout<< " 7th "<<*(arr+3)<<endl;
    int i=3;
    cout<<i[arr];


    }
