#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
//formula phi(n)=n*(p1-1)/p1*(p2-1)/p2*(p3-1)/p3 ......; where p1,p2,p3... are prime factors of n;
ll phi(ll n)
{
	ll res=n;
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			res/=i;
			res*=(i-1);
			while(n%i==0)
			{
				n=n/i;
			}
		}
	}
	if(n>1)
	{
		res/=n;
		res*=(n-1); 
	}
	return res;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
				  	 
		ll n,k,i,j;
		cin>>n;
		cout<<"ETF"<<n<<" = "<<phi(n)<<endl;
	}

	return 0;
}
