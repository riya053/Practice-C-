#include<iostream>
#include<vector>
using namespace std;
vector <int> reverse (vector <int> v)
{
    int s=0,e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector <int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    {

    }
}  
int main()
{
    vector <int> v;
    v.push_back(11);
    v.push_back(9);
    v.push_back(13);
    v.push_back(22);
    v.push_back(5);
    v.push_back(4);
    vector <int> ans=reverse(v);
    cout<<"PRINTING REVERSE ARRAY:"<<endl;
    print(ans);
    return 0;

}

output:
PRINTING REVERSE ARRAY:
4 5 22 13 9 11
