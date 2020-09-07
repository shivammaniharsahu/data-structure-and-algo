#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10001];
int vis[10001]={0},dis[10001];
void bfs(int src)
{
	vis[src]=1;
	dis[src]=0;
	queue<int> q;
	q.push(src);
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int child:adj[curr])
		{
			if(vis[child]==0)
			{
				q.push(child);
				dis[child]=dis[curr]+1;
					vis[child]=1;
						
			}
			
		}
		
		
	}
}
int main()
{
	int i,j;
	int n,a,b,t;
	
	cin>>t;
	while(t--)
	{
		for(i=1;i<=n;i++)
		{
			adj[i].clear();
			vis[i]=0;
		}
		int e;
		cin>>n>>e;
		for(i=1;i<=e;i++)
		{
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		bfs(1);
		cout<<dis[n]<<endl;
	}
}
