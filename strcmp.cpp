#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[]="bcd";
    char s2[]="bcd";
    int res=strcmp(s1,s2);
    if(res>0)
        cout<<"Greater";
        else if(res==0)
        cout<<"Equal";
        else
        cout<<"Smaller";

}

output:

Equal
