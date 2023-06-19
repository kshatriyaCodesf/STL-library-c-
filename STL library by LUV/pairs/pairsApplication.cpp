// ARRAY Of the pairs 
#include<iostream>
using namespace std;
int main(){

        int a [] ={1,2,3};
        int b[]= {2,3,4};

        pair<int , int> p_array[3]; // here 3 is the size of the  array whose data type is pair it means it will store pairs 
        for(int i=0;i<3;i++)
        {
            p_array[i]={a[i] ,b[i]};
        }
        for(int i=0;i<3;i++)
        {
            cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
        }

        /* if we are swapping the first and the second pairs in the pairs 
        then  from the both the arrays first and the last value will be 
        swapped */

        swap(p_array[0] , p_array[2]);

        // final output after the swaping of the first and the last element of the pair array
         for(int i=0;i<3;i++)
        {
            cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
        }
        


return 0;
}
