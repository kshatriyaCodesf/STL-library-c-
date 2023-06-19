/*ITERATORS*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v = {2,3,4,5,6,7};
    for(int i = 0 ; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it = v.begin();
    cout<<(*it)<<endl;
    cout<<(*(it+1))<<endl;
    // in this way we can also access this elements of the vector using the iterator
    return 0;
}