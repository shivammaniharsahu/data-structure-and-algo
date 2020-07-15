#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef  long long int lli;
//typedef long double ld;
typedef unsigned long long ull;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
//order_of_key(x) : number of items less than x
//find_by_order(x) : iterator to x
#define REP(i,n) for(long long i=1;i<=n;i++)
#define mem(dp,a)           memset(dp,a,sizeof dp)
#define rep(i,a,b)          for(ll i=a;i<b;i++)
#define pb(x)               push_back(x)
#define mp(x,y)             make_pair(x,y)
#define fastio              ios_base::sync_with_stdio(false);cin.tie(NULL)
#define F                   first
#define S                   second
#define all(v)              (v).begin(),(v).end()

//const ld pi=3.14159265359;
ll INF=1e18+10;
ll MOD=998244353;
ll mod=1e9+7;


ll caldiv(ll n)
{
	ll i,j;
	bool hash[n+1];
	memset(hash,true,sizeof(hash));
	for(i=2;i*i<n;i++)
	{
		if(hash[i])
		{
		 		   for(j=i;i*i<n;j+=i)
					{
						hash[i]=false;
					}		
		}	
	}
	ll total=1;
	for(i=2;i*i<=n;i++)
	{
		if(hash[i])
		{
			ll c=0;
			if(n%i==0)
			{
				while(n%i==0)
				{
					n/=i;
					c++;
				}
			}
			total=total*(c+1);
		}
	}
	return total;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 		  	 
					
					ll n,i,c=2;
					cin>>n;
					cout<<caldiv(n)<<endl;
	}
}
