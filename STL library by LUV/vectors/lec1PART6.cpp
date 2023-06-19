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
    
    //making copy without using the reference:
    vector<int>v(5 , 8);
    vector<int>v1 = v; // 
    
    v.push_back(98);

    printVec(v);
    printVec(v1);

    /*from this we can see that making the change in the v is not affecting the value of the v2 because we have made the copy v2 as the copy of the v */

    //making copy using reference:
    vector<int>x(5,3);
    vector<int>&y=x;

    x.push_back(69);
    printVec(x);
    printVec(y);
    /*here as we can see that the changes done in the vector x also reflected in the y*/

return 0;
}

// NOTE:
/*
1. copying of the vector ->O(n) only when we are trying without using the pass by address method.

*/


