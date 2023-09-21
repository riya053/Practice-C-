#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={9,5,6,7,8,2};
    int n=6;
    sort(arr,arr+n);
    for(int x:arr)
    cout<<x<<" ";
    
}
