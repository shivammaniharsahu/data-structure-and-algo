#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef  long long int lli;
//typedef long double ld;
//typedef unsigned long long ull;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
//order_of_key(x) : number of items less than x
//find_by_order(x) : iterator to x

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
	int t;
	cin>>t;
	while(t--)
	{
			lli n,i;
			cin>>n;
			char ar[]={'A','B','C','D'};
			lli tot;
			tot=1<<n;//tot=2^n
		//	lli ar[n]={0};
			for(i=0;i<tot;i++)
			{
				for(int j=0;j<n;j++)
				{
					int f=1<<j;
					if((i&f)!=0)
					cout<<ar[j]<<" ";
				}
				
				cout<<endl;
			}
	}
}
