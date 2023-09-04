#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity -> "<<v.capacity()<<" ";

    v.push_back(4);
    
    cout<<"Capacity -> "<<v.capacity()<<" ";

    v.push_back(9);

    cout<<"Capacity -> "<<v.capacity()<<" ";

    v.push_back(3);

    cout<<"Capacity -> "<<v.capacity()<<" ";

    cout<<"Size -> "<<v.size()<<" ";

    cout<<"Element at 2nd index:  "<<v.at(2)<<endl;

    cout<<"Front element: "<<v.front()<<endl;

    cout<<"Back element: "<<v.back()<<endl;
    
    v.pop_back();
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<"Size of array: "<<v.size();


}

output:

Capacity -> 0 Capacity -> 1 Capacity -> 2 Capacity -> 4 Size -> 3 Element at 2nd index:  3
Front element: 4
Back element: 3
4 9
Size of array: 0
