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

    

    m.erase(1);  // passing the m.end() inside the erase function will throw a segement error  hum kabhi bhi erase me ek aisa iterator nahi de sakte jo exist nahi karta hae  
    m.clear(); // clears all the value inside the map 
    for(auto value:m)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
   return 0;
}
    