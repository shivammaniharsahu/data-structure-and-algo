#include<bits/stdc++.h>
using namespace std;
vector<int> adj(10001);
int vis[10001];
int maxd,maxnode;
void dfs(int node,int dis)
{
	vis[node]=1;
	if(maxd<dis)
	{
		maxd=dis,maxnode=node;
	}
	for(int child:adj[node])
	{
		if(!vis[child])
		dfs(child,dis+1);
	}
}


int main()
{
	
	int n,i,a,b;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);	
	}
	maxd=-1;
	dfs(1,0);
	cout<<maxd;
	for(i=1;i<=n;i++)
	{
		vis[i]=0;
	}
	dfs(maxnode,0);
	cout<<maxd;
}
