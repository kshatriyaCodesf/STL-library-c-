#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(10);
    v.push_back(7);
    for(int i =0 ;i<v.size();i++)
    {
         cout<<v[i]<<" ";
    }
    cout<<endl;
    /*push back always from the end */

    // vector with the same value all over the array 
    vector<int>a(10 , 3);
    /*here 10 is the size of the vector and the 3 is filled at every index*/
    for(int i=0 ;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // we can also declare am empty vector and later we will add the value using the push_back functionn
    vector<int>c;
    c.push_back(7);
    c.push_back(45);

    for(int i=0 ;i<c.size();i++)
    {
        cout<<c[i]<<endl;
    }

    // pop_back function pops out the last value from the vector TOC ->O(1)
    c.pop_back();

    
    for(int i=0 ;i<c.size();i++)
    {
        cout<<c[i]<<endl;
    }
    


return 0;
}   