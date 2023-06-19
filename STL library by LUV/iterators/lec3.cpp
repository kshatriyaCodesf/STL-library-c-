
/*ITERATORS*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v = {2,3,4,5,6,7};
    for(int i = 0 ; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    for(it = v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    return 0;
}
//NOTE:
    /*
        it++ ->yeh next iterator par move karta hae 
        it+1 ->next location par move karta hae or next address par leke 
        jata hae

        but  in case of the vectors it++ and the it+1 both are same 
        because vectors are continuous like an array 
    */