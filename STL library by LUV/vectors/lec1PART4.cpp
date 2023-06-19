#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int>v)
{
    cout<<v.size()<<endl;
    for(int i = 0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        printVec(v);
        cin>>x;v.push_back(x);
    }
printVec(v);
return 0;
}


// NOTE :
/*vectors also stars indexing from the zero like an array and vectors also allcoate continuous memory allocation
*/
/*
toc of following inbuilt function:
1. v.push_back()->O(1) -- add element inside the vector from the back
2. v.size()->O(1)      -- gives the size of the element
3.
*/