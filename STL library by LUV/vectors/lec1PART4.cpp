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
3.vector also has some space complexity like 
in declaration of one vector it is O(n)

In C++, what are the main functions of vector?
A vector is a sequence container class that implements dynamic array, which indicates that its size changes as elements are added. A vector holds its items in contiguous memory locations and allocates the memory as needed during execution.

Can we add the elements in the vector from the front?
Moving all the other parts back means adding to the front of a vector. If you want to perform insertion from front, you should probably use list or deque. 
*/