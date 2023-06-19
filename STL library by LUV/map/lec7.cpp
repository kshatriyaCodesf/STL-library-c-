/*unordered maps*/
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    /*
        we cannot insert the pairs in the unordered map because unorderd map uses hash  to do inbuilt implementation and since pairs does not 
        contain any inbuilt hashtable, so unordered map with pairs throws error  but maps works on the principle of the comparision so that 
        it can compare pairs values to make  while storing so it will not throw the error
    */
    // unordered_map<pair<int , int> , string>m;

return 0;
}
/*

In the unordered map keys get printed on the random order not  on the sorted order 

maps uses tree to do inbuilt implementation
unordered_map uses hash table for inbuilt implementation

time complexity -> O(1) both insertion and accesing
and this o(1) is average time complexity because in the case of the collisions it may increase

*/