#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class permutation{
    public:
    void permut(string s,int i,int j)
    {
        if(i==j-1)
        {
            cout<<s<<"\n ";
        }
        else{
            for(int k=i;k<=j-1;k++)
            {
                swap(s[i],s[k]);
                permut(s,i+1,j);
                swap(s[i],s[k]);

            }
        }
    }
};
int main()
{
    class permutation obj;
    string str="ABC";
    int j=str.length();
    obj.permut(str,0,j);
}

output:
ABC
 ACB
 BAC
 BCA
 CBA
 CAB
