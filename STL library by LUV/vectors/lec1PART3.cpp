// copying in the vector
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&x)
{
    x.push_back(57789);
    for(int i=0;i<x.size() ;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v(5);
    for(int i=0; i<5;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    /*
                we can copy the value of the previous vector in the new vector   --vector<int>x = v  -- and the toc of doing this is O(n) is a very expensive operation in terms of progrramming ;
    */
                /*Using the copy is not at all the recommended to do in the programming  */

                /* so instead of doing the copy we use the address */
                
    vector<int>&v2=v;
    print(v);
    
    cout<<"in the 'v' vector and the 'v2': you can see the changes made inside the function reflect changes for the real vector also even the other vectors which is made equal to that vector"<<endl;

    for(int i=0 ;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    for(int i =0 ;i<v2.size();i++)
    {
        cout<<v2[i]<<endl;
    }
    // we can make vector of  a string also  
return 0;
}