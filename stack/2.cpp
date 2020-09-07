#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		ll n,i,k,j;
		cin>>n;
		ll x[n],y[n];
		for(int i=0;i<n;i++)
		{
			cin>>x[i]>>y[i];
		}
		ll ans=n;
		k=n/2;
		while(k>=3)
		{
			ans+=k;
			n=k;
			k=n/2;	
		}
				cout<<ans;
		cout<<endl;
		
	}
	
}
