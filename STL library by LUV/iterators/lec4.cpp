#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<pair<int , int>>v_p = {{1,2},{5,6},{7,9},{0,2},{8,2}};
vector<pair<int,int>> :: iterator it;
for(it = v_p.begin();it!=v_p.end();it++)
{
    cout<<(*it).first<<" "<<(*it).second<<endl;
    // or cout<<it->first<<" "<<it->second<<endl; whenver we are trying to point the second and the first of the pairs 
}

// it here is just a variable we can also write any suitable variable in place of the it

return 0;
}