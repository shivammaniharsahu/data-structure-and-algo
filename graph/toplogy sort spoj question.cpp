#include<bits/stdc++.h>
#define lli long long int 
using namespace std;

vector<lli> ar[1000001],res;
lli in[1000001];
lli kahns(lli n)
{
	priority_queue<lli,vector<lli>,greater<lli>> q;
	for(lli i=1;i<=n;i++)
	{
					if(in[i]==0)
						q.push(i);
		
	}
	while(!q.empty())
	{
		lli curr=q.top();
		res.push_back(curr);	
		q.pop();
		for(auto child:ar[curr])
		{
			in[child]--;
			if(in[child]==0)
				q.push(child);
		}
	}
	return res.size()==n;
}
int main()

{
	lli n,m,i,j,f=0,x,y;
	cin>>n;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>x>>y;
		ar[x].push_back(y);
		in[y]++;
	}
	if(!kahns(n))
	{
		cout<<"Sandro fails.";
	}
	else
	{
		for(auto node:res)
		{
			cout<<node<<" ";
		}
	}
}
