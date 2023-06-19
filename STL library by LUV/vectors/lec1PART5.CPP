#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int>v)
{
   
    for(int i = 0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    vector<int>v(10,3);
    //-- here v (10) is the vector of the size 10
    //-- here v(10,3) is the vector of the size 10 having constant value 3 at all the index  of the vector

    v.push_back(7);v.push_back(8);
    printVec(v);

    v.pop_back();
    printVec(v);

return 0;
}


//NOTE:
/*
1. v.pop_back();-O(1)
it removes out last element of the vector 
*/