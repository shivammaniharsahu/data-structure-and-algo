#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001]={0},dis[100001]={0},level[100001]={0};
void bfs(int src)
{
 	queue<int> q;
 	q.push(src);
 	vis[src]=1;
 	dis[src]=0;
 	while(!q.empty())
 	{
 		int curr=q.front();
 		q.pop();
 		
 		for(int child:ar[curr])
 		{
 			
 			if(vis[child]==0)
 			{
 				dis[child]=dis[curr]+1;
 				q.push(child);
 				vis[child]=1;
 				level[dis[child]]++;
			}
		}
	 }
 	
}


int main()
{
		int n,m,i,a,b;
		
		int src,d,q;
		cin>>n;
		cin>>m;
	
		for(i=1;i<=m;i++)
		{
			cin>>a>>b;
			ar[a].push_back(b);
			ar[b].push_back(a);
		}
		cin>>q;
		for(i=0;i<q;i++)
		{
			cin>>src>>d;
			for(int j=0;j<=n;j++)
			{
				
				//ar[j].clear();
				level[j]=0;
				vis[j]=0;
			}
			bfs(src);
			cout<<level[d];
			cout<<endl;
		}	
}
