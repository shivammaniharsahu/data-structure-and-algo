#include<bits/stdc++.h>
using namespace std;
char adj[100][100];
int dis[100][100];
int vis[100][100];
int n;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool isValid(int x,int y)
 {
 	if(x>n||x<1||y<1||y>n)
 	{
 		return false;
	 }
     if(vis[x][y]==1||adj[x][y]=='T')
 	{
 		return false;
	 }
	 
	 return true;
 }
  
void bfs(int srcx,int srcy)
{
	queue <pair<int,int> > q;
	q.push({srcx,srcy});
	dis[srcx][srcy]=0;
	vis[srcx][srcy]=1;
	while(!q.empty())
	{
		int currx=q.front().first;
		
		int curry=q.front().second;
		int d=dis[currx][curry];
		q.pop();
		
		for(int i=0;i<4;i++)
		{
			int newx=currx+dx[i];
			
			int newy=curry+dy[i];
			
			if(isValid(newx,newy))
			{
				dis[newx][newy]=d+1;
				vis[newx][newy]=1;
				q.push({newx,newy});
			}
			
		}
		
	}
	
}


int main()
{
	int srcx,srcy,endx,endy;
	int m,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>adj[i][j];		
			if(adj[i][j]=='S')
			srcx=i,srcy=j;
			if(adj[i][j]=='E')
			endx=i,endy=j;	
		}
	}	

	bfs(srcx,srcy);
	cout<<dis[endx][endy];
	
	
	
}
