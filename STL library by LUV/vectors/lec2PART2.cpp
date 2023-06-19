/*ARRAY OF THE VECTORS*/
#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int>&v)
{
    /*it will print the array of the vector*/
    for(int i = 0 ; i<v.size( ) ;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int N;
    cin>>N;
    vector<int>v[N];
    for(int i = 0 ; i<N ; i++)
    {
       int n ;
       cin>>n;
       for(int j = 0 ;  j<n ;j++)
       {
            int x ;
            cin>>x;
            v[i].push_back(x);
       }
    }
    for(int i=0; i<N;i++)
    {
        printVec(v[i]);
        cout<<endl;
    }

    /*
    we can also access the element  of the array of the vector  like a  2D array
    */
    cout<<v[0][0]<<endl;
    cout<<v[0][1]<<endl;
    cout<<v[1][0]<<endl;
    cout<<v[1][1]<<endl;

return 0;
}