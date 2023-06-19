/*map library*/
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m ;
    m[-2] = "pqr";
    m[-1] = "abc";
    m[0] = "cdc";
    m[1] = "efg";
    m[2] = "mno";
   



    /*m.find will return iterator if it is present inside the map otherwise it will return m.end()+1*/
    auto it = m.find(-1); // O(log n)
    if(it == m.end())
    {
        cout<<"NO value"<<endl;
    }
    else
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    /*m.erase*/
    m.erase(2); // o(log n)
    for(auto value:m)
    {
        cout<<value.first<<" "<<value.second<<endl;
        /*it erases the element according to their key value*/
    }

    

return 0;
}
    