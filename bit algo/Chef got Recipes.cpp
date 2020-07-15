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
		
		lli n,i,c=0,j,f[32];
		cin>>n;
		string ss;
		for(i=0;i<32;i++)
		f[i]=0;
		for(i=0;i<n;i++)
		{
			cin>>ss;
			int mask=0;
			for(char ch:ss)
			{
				if(ch=='a')
				mask=mask|(1<<0);
				
				else if(ch=='e')
				mask=mask|(1<<1);
				
				else if(ch=='i')
				mask=mask|(1<<2);
				
				else if(ch=='o')
				mask=mask|(1<<3);
				
				else if(ch=='u')
				mask=mask|(1<<4);
				
			}
			f[mask]++;
		}
		lli res=0;
//			for(i=1;i<32;i++)
//		{
//			cout<<f[i]<<" ";
//		}
//		cout<<endl;
		for(i=1;i<32;i++)
		{
			
			for(j=i+1;j<32;j++)
			{
				if(i|j==31)
				{
					res=res+f[j]*f[i];
				}
			}
		}
		
	//	cout<<res;
		res=res+(f[31]*(f[31]-1))/2;
		cout<<res<<endl;
		
	}	
		
}
