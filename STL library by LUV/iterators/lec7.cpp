/*using auto keyword*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    auto a = 1 ;
    cout<<a<<endl;
/*

auto keyword automatically adjust itself according to the datatype of the value means in the case of the a = 1.0 auto 
will behave like float simalarly in the case of the double , int , char , string auto behave like the datatype*/

/*so using the auto decreases the size of the loop  and make the code look simpler
*/
vector<int>v = {1,2,3,4,5};
for(auto it = v.begin(); it!=v.end();it++)
{
    cout<<(*it)<<" ";
}
cout<<endl;
/*here auto keyword automatically determines that is the vector 
of the int datatype*/
vector<pair<int,int>>v_p={{4,5} , {6,7}};
for(auto it=v_p.begin();it!=v_p.end();it++)
{
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
for(auto &value : v_p)
{
    cout<<value.first<<" "<<value.second<<endl;
}

return 0;
}