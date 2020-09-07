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


int main()
{
	
		fastio;
		int t;
		cin>>t;
		while(t--)
		{
			ll c=0;
			ll n,i,x;
			cin>>n;
			ll ar;
			vector<int> v;
			for(i=1;i<=n;i++)
			{
				cin>>ar;
				v.push_back(ar);
			}
			reverse(v.begin(),v.end());
			for(int i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
				}				
			
			cout<<endl;
		}
}
