/*vectors are the nothing but an  array with the dynamic  
size since we all know that arrays are having there sizes fixed*/

#include<bits/stdc++.h>
using namespace std;
void print(vector<int>x)
{
    cout<<"Size of the vectors: "<<x.size()<<endl; // x.size() gives the size of the vector-->TOC O(1)
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<endl;
    }
}
int main(){
        // vector representation:-
        
        vector<int>v;
        int n ;
        cin>>n;
        for(int i = 0 ;i<n;i++)
        {
            int x ;
            cin>>x;
            v.push_back(x); // TOC of push_back O(1) 
            // push back takes input

        }
        print(v);

return 0;
}

/* size declariation of the vectors in the online coding contest */
// local declared vectors ->upto  10^5  in the size 
// gloabal declared vectors->upto 10^7 in the size

