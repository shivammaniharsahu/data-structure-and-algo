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
#define REP(i,n) 			for(long long i=1;i<=n;i++)
#define mem(dp,a)           memset(dp,a,sizeof dp)
#define rep(i,a,b)          for(ll i=a;i<b;i++)
#define pb(x)               push_back(x)
#define mp(x,y)             make_pair(x,y)
#define fastio              ios_base::sync_with_stdio(false);cin.tie(NULL)
#define F                   first
#define S                   second
#define all(v)              (v).begin(),(v).end()
#define  en endl
//const ld pi=3.14159265359;
ll INF=1e18+10;
ll MOD=998244353;
ll mod=1e9+7;
const int N=100;
ll ar[N][N],I[N][N];


void mul(ll A[][N],ll B[][N],ll dim)
{
	
	ll res[N+1][N+1];
	REP(i,dim)
	{
		REP(j,dim)
		{
			res[i][j]=0;
			
			REP(k,dim)
			{
				res[i][j]+=(A[i][k]*B[k][j])%mod;
			}
		}
	}
	
	REP(i,dim)
	{
		REP(j,dim)
		{
			A[i][j]=(res[i][j])%mod;
		}
	}
}




void matmul(ll A[][N],ll dim,ll n)
{
	REP(i,dim)
	{
		REP(j,dim)
		{
			if(i==j)
					I[i][j]=1;
			else 
		 		 I[i][j]=0;
		}
	}
	
//	REP(i,n)     //navie approach
//	{
//			mul(I,A,dim);
//	}
//	
while(n)
{
	if(n%2)
	{
		mul(I,A,dim);
		n--;
	}
	else
	{
		mul(A,A,dim);
		n/=2;
	}
}



	REP(i,dim)
	{
		REP(j,dim)
		{
			A[i][j]=(I[i][j])%mod;
		}
	}
}
void printmat(ll A[][N],ll dim)
{
	REP(i,dim)
	{
		REP(j,dim)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}



int main()
{
	int t1;
	cin>>t1;
	while(t1--)
	{
			ll n,i,dim,j;
			cin>>dim>>n;
			
			REP(i,dim)
			{	   
               REP(j,dim) {
				cin>>ar[i][j];
				}		   	
			}
//			for(i=1;i<=dim;i++)
//			{
//				for(j=1;j<=n;j++)
//				cin>>ar[i][j];
//			}

			matmul(ar,dim,n);
			printmat(ar,dim);
			
	}
}
