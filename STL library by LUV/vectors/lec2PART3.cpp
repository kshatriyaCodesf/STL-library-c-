/*VECTOR OF VECTOR*/
#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int>&v)
{
    /*it will print the vector of vector*/
    for(int i = 0 ; i<v.size( ) ;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main(){
    int N ;
    cin>>N;
    vector<vector<int>>v;
    for(int i = 0 ; i<N ; i++)
    {
        int n;
        cin>>n;
        vector<int>temp;
        for(int j = 0 ; j< n ;j++)
        {
            int x ;
            cin>>x ;
            temp.push_back(x);
            
        }
        v.push_back(temp);
    }
    v[0].push_back(10);// if we want to add someting in the vector then we have to add like this 
    for(int i = 0 ; i<v.size() ; i++)
    {
        printVec(v[i]);
        cout<<endl;
    }
return 0;
}