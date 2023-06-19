/*USING AN EMPTY VECTOR WE CAN ALSO WRITE THE CODE OF VECTOR OF VECTOR*/
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
int main()
{
    int N ; 
    cin>>N;
    vector<vector<int>>v;
    for(int i = 0 ; i<N ; i++)
    {
        int n;
        cin>>n;
        v.push_back(vector<int>()); // instead of making new vector we can just push a vector that will be pushed inside the vector and whenver we  write v[0] the inside vector get called.
        for(int j=0;j< n;j++)
        {
            int x ;
            cin>>x ;
            v[i].push_back(x);
        }
       
    }
    v[0].push_back(10);// if we want to add someting in the vector then we have to add like this 
    for(int i = 0 ; i<v.size() ; i++)
    {
        printVec(v[i]);
        cout<<endl;
    }
return 0;
}