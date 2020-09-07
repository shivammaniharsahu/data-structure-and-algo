#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,m,i;
	cin>>n>>m;
	ll ar[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>ar[i];
	}
	ll a,b,c;
	while(m--)
	{
		cin>>a>>b>>c;
			
		priority_queue<int,vector<int>,greater<int> > pq;
		for(i=a;i<=b;i++)
		{
			pq.push(ar[i]);
		}
		c=c-1;
		while(c>0)
		{
			pq.pop();
			c--;
		}
		
		cout<<pq.top()<<"\n";
	}
}
