/*VECTOR OF THE PAIRS*/

#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<pair<int , int>>&v)
{
    cout<<"size:"<<v.size()<<endl;
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" ";
        cout<<endl;
    }
}
int main(){
   vector<pair<int , int>>v;
   int n ; cin>>n ; 
   int x , y ;
   for(int i = 0 ; i<n;i++)
   {
     cin>>x>>y ;
     v.push_back({x, y}); // or v.push_back(make_pair(x,y));
   }
   printVec(v);
return 0;
}
//NOTE:
/*
    Vector of Pairs means the vector that stores the pairs inside it 
    like it stores other datatypes value like int , sting  ,char  etc .


    #vector pair entry manually in the curly braces format
    vector<pair<int,int>>v={{1,2},{5,6},{7,8}};
    
*/