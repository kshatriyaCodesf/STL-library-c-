/*map library*/
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m ;
    m[-1] = "abc";
    m[0] = "cdc";
    m[1] = "efg";
    
    /*keys inside the map is unique if we are using the same key that 
    we have used it before then we with the different key value then it 
    will not add the new key value pair in the map instead it will change 
    the previous one value of the key with the new one*/

    m[0]="mnoqrst";
    
   
   
   
    for(auto &value : m)
    {
         cout<<value.first<<" "<<value.second<<endl;
    }

    

return 0;
}
    