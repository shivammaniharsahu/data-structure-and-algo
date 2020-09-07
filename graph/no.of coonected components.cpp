#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10001];
int  vis[10001]={0};
void dfs(int node)
{
	vis[node]=1;
	//cout<<node<<" ";
//	for(int i=0;i<adj[node].size();i++)
//	{
//		int child=adj[node][i];
//		if(!vis[child])
//		dfs(child);
//	}

	for(int child:adj[node])
	{
		if(!vis[child])
		dfs(child);
	}

}
int main()
{
	int n,e,i,a,b;
	cin>>n>>e;
	for(i=1;i<=e;i++)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int c=0;
	for(i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			dfs(i);
			//cout<<endl;
			c++;	
		}
	}
	cout<<c;
}
