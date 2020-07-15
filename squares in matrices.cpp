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
			lli n,i,sum=0,m,j,a;
			cin>>n>>m;
			vector<vector<int>> v(n);
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					cin>>a;
					v[i].push_back(a);
				}
			}
			vector<int> count(m,0);
			int topleft=0;
			int result=0;
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					if(v[i][j]==1)
					{
						int top=(i==0)?0:count[j];
						int left=(j==0?0:count[j-1]);
						count[j]=1+min({top,topleft,left});
						result+=count[j];
						topleft=(j==m-1)?0:top;
					}
					else
					{
						count[j]=0;
					}
				}
			}
			cout<<result;
			
			
			
			
			
			
}
