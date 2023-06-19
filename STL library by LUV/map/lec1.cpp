/*map library*/
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m ;
    m[-1] = "abc";
    m[0] = "cdc";
    m[1] = "efg";
    
    // another way to insert inside the map is using map.insert:
    m.insert({2 , "mno"});
    m[3];/*since we are not providing it some value so it will take empty string since we have enterd string as one of the map element suppose if could have used the int instead of the string then  we would  get 0 */
    map<int,string>::iterator it;
    for(it=m.begin() ; it!=m.end() ; it++)
    { 
        cout<<it->first<<" "<<it->second<<endl;
    }

    for(auto it=m.begin() ; it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    for(auto &value : m)
    {
         cout<<value.first<<" "<<value.second<<endl;
    }

    

return 0;
}
    /*time complexity of entering the value inside the map is o(log n)
    even if we are simply writing like this 
    m[5] = "cmn"; this sigle operation will take o(log n) time 
    */
    /*maps always store variable in the sorted order of the value  of the keys*/