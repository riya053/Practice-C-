#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    //push elements
    for(int i=1;i<=5;i++)
    {
    v.push_back(i);
    }
    cout<<"Vector size: "<<v.size();
   //check if the vector is empty or not
   if(v.empty()==false)
   {
    cout<<"\nVector is not empty";
   }
   else
        cout<<"\nVector is empty.";

        cout<<"\n Output of begin and end:";
        for(auto i=v.begin();i!=v.end();++i)
        {
            cout<<*i<<" ";
        }
        //insert at the beginning
        v.emplace(v.begin(),6);
        cout<<"\n The first element is :"<<v[0];

        //Insert 20 at the end
        v.emplace_back(20);
        int n=v.size();
        cout<<"\nElement at end is :"<<v[n-1];

        //erase the vector
        v.clear();

        cout<<"\n vector size after erase :"<<v.size();

        


}

output:

Vector size: 5
Vector is not empty
 Output of begin and end:1 2 3 4 5
 The first element is :6
Element at end is :20
 vector size after erase :0
