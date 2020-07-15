#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=1000000007;
ll f[1000001];
ll power(ll a,ll n)
{
	ll res=1;
	 while(n>0)
		{
			if(n%2)
			{
				res=(res*a)%mod;
				n--;
			}
			else
			{
				a=(a*a)%mod;
				n/=2;
			}
		}
		return res;
}

ll C(ll n,ll k)
{
	if(k>n)
	return 0;
	ll res=(f[n]%mod);
	res=(res*power(f[k],mod-2))%mod;//modulo inverse is used
	res=(res*power(f[n-k],mod-2))%mod;
	return res;
}
int main()
{
	
	f[0]=1;f[1]=1;
	for(ll i=2;i<=1000000;i++)
	f[i]=(f[i-1]*i)%mod;
	int t;
	cin>>t;
	while(t--)
	{	
		long long k,n,res=1;
		cin>>n>>k;
		cout<<C(n,k);
		cout<<endl;			   
    }			
}
