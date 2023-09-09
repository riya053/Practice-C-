#include<iostream>
using namespace std;
int main()
{
    string s="codingninjas";
    int count[26]={0};
    for(int i=0;i<s.length();i++)
    {
        count[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            cout<<char('a'+i)<<" "<<count[i]<<endl;
        }
    }
}

output:

a 1
c 1
d 1
g 1
i 2
j 1
n 3
o 1
s 1
