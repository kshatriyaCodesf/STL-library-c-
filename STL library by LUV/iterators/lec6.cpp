/*printing the pair value using the range*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int, int>>v = {{1,2} , {45,69}};
    for(pair<int , int>&value:v)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
return 0;
}