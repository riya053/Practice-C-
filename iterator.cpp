#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> ar={1,2,3,4,5};
    vector<int>:: iterator ptr,ftr;
    cout<<"The vector elements are: \n";
    for(ptr=ar.begin();ptr<ar.end();++ptr)
    {
        cout<<'\t'<<*ptr<<" ";
    }
    ptr=ar.begin();
    advance(ptr,3);
    cout<<"\nThe position of pointer after iterating is:";
    cout<<*ptr<<" ";

    ptr=ar.begin();
  
    ftr=ar.end();
    auto it=next(ptr,3);
    auto it1=prev(ftr,3);
    cout<<"\n The Position of new iterator using next is:";
    cout<<*it;
    cout<<"\n The Position of new iterator using prev is:";
    cout<<*it1<<"\n";
    vector <int> ar1={10,20,30};
    ptr=ar.begin();
    advance(ptr,3);
    copy(ar1.begin(),ar1.end(),inserter(ar,ptr));
    for(int &x:ar)
    {
        cout<<x<<" ";
    }


}

output:

The vector elements are: 
        1       2       3       4       5
The position of pointer after iterating is:4
 The Position of new iterator using next is:4
 The Position of new iterator using prev is:3
1 2 3 10 20 30 4 5
