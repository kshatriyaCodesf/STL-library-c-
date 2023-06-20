#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	long long n , k ;
	cin>>t;
	long long  cANDIEStotalConsumed = 0 ; 
	while(t-->0)
	{
		cin>>n>>k;
		multiset<long long >bags;
	 	for(auto value:bags)
		{
			long long NumOfCandies ; cin>>NumOfCandies;
			bags.insert(NumOfCandies);
		}
		for(int i = 0  ; i <= k ;i++)
		{
			auto last_it = --bags.end();
			long long lastCandy = *last_it;
			long long cANDIEStotalConsumed+=*last_it;
			bags.erase(last_it);
			bags.insert(lastCandy/2);
		}
		
		cout<<cANDIEStotalConsumed<<endl;
	}
}