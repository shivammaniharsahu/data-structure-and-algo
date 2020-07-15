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
//ll INF=1e18+10;
//ll MOD=998244353;
//ll mod=1e9+7;
vector<int> ar[100001];
vector<int> primes;
int vis[100001],dist[100001];

bool isPrime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}

bool isValid(int a,int b)
{
	int cnt=0;
	while(a>0)
	{
		if(a%10!=b%10)
		cnt++;
		a/=10,b/=10;
	}
	if(cnt==1)
	 return true;
	 else
	  return false;
}

void buildGraph()
{
	for(int i=1000;i<=9999;i++)
	{
		if(isPrime(i))
		primes.push_back(i);
	}
	for(int i=0;i<primes.size();i++)
	{
		for(int j=i+1;j<primes.size();j++)
		{
			int a=primes[i];
			int b=primes[j];
			if(isValid(a,b))
			{
			 ar[a].push_back(b);
			 ar[b].push_back(a);
			}
		}
	}
}
void bfs(int src)
{
	queue<int> q;
	q.push(src);
	vis[src]=1;
	dist[src]=0;
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int child:ar[curr])
		{
			if(vis[child]==0)
			{
				vis[child]=1;
			
				dist[child]=dist[curr]+1;
				
				q.push(child);
			}
		}
	}

}
int main()
{
	int t;
	cin>>t;
	buildGraph();
	while(t--)
	{
		int n,m,i,a,b;
		cin>>a>>b;
		for(int i=1000;i<=9999;i++)
		{
			dist[i]=-1;
			vis[i]=0;
		}
		bfs(a);
		if(dist[b]==-1)
		cout<<"Impossible"<<endl;
		else
		cout<<dist[b]<<endl;
	}
	
}
