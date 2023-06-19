/*
Given N strings and Q queries. 
In each query you are given a string
print frequency of that string

N <=10^6
|S|<=100
Q <=10^6

*/
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string , int>m;
    int n ; cin>>n;
    for(int i = 0 ; i< n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto pr:m)
    {
        cout<<pr.first<<":"<<pr.second<<endl;
    }
return 0;
}