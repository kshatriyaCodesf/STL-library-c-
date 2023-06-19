#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {2,3,4,5,6,7};

    // Range based
    for(int value:v)
    {
        value++;
        cout<<value<<" ";
    }
    cout<<endl;
    for(int value : v)
    {
        cout<<value<<" ";
    }
    /*here we can see that even incrementing the value of it is not 
    affecting the real value of this because copy of the value is passed 
    in the reference is not passed to do so we have the pass the value 
    using pass by reference*/
    cout<<endl;
    for(int &value:v)
    {
        value++;
        cout<<value<<" ";
    }
    cout<<endl;
    for(int value:v)
    {
        cout<<value<<" ";
    }
    // here as you can see that the value of the value got changed 

return 0;
}