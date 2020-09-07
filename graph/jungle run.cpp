#include<bits/stdc++.h>
using namespace std;
char ar[32][32];
int vis[32][32],dis[32][32];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int n;
bool isValid(int x,int y)
{
	if(x>=n||x<0||y>=n||y<0)
	return false;
	if(vis[x][y]==1||ar[x][y]=='T')
	return false;
	return true;
}
void bfs(int srx,int sry)
{
	queue<pair<int,int> > q;
	q.push({srx,sry});
	vis[srx][sry]=1;
	dis[srx][sry]=0;
	q.pop();
	while(!q.empty())
	{
		int x=q.front().first;
		int y=q.front().second;
		int d=dis[x][y];
		q.pop();
		for(int i=0;i<4;i++)
		{
			int newx=x+dx[i];
			int newy=y+dy[i];
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
	int srx,sry,endx,endy;
	cin>>n;
	for(int i=0;i<n;i++)
	{
			
		for(int j=0;j<n;j++)
		{
			cin>>ar[i][j];
			if(ar[i][j]=='S')
			{
				srx=i;
				sry=j;
			}
			if(ar[i][j]=='E')
			{
				endx=i;
				endy=j;
			}
		}

	}
	bfs(srx,sry);
	cout<<dis[endx][endy];
}

}
