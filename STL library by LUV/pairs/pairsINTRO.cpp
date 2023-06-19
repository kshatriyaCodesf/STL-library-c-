/*Pairs in the STL*/
#include<iostream>
using namespace std;
int main(){
    pair<int , string>p;
// here p is the variable of the pair represeting the pair

// first initialisation method of the pair:   p=make_pair(45 , "abcd");


// second method of intializing pair/
p ={2 ,"abcd"};
cout<<"to get first value of pair: "<<p.first<<endl<<"to get second value of the pair: "<<p.second<<endl;

// copying of the pairs:
pair<int , double>p1;
p1={1,4.2563};
pair<int , double>p2 = p1;
cout<<p2.first<<endl;
cout<<p2.second<<endl;

/* since during the copy of the variable the copy of the value is transferred rather than the exact value  so changing in the value of the p2 variable will not affect the p1 variable

p2.first=56;
cout<<p1.first<<endl;  // look it is stil 1 not changed 
*/

// if we are thinking of  changing the varible of the p1 also if we make changes in the p2 so we have to use the & operator or we have the pass the value of the address instead of the varaible actual value

    // we are passing the value by the addresss
    pair<int , double>&p3 = p1;
    p3.first=85525;
    cout<<p1.first<<endl;
    cout<<p3.first<<endl;


   // we can also take the input in the pairs 
   pair<int , string>inp;
   cin>>inp.first>>inp.second;
   cout<<inp.first<<" "<<inp.second<<endl;




return 0;
}