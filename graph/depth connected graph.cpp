#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10];
bool visited[10];
int i;


void dfs(int s)
{
	//cout<<"bye";
	visited[s]=true;
	
	for(i=0;i<adj[s].size();++i)
	{
		
		if(visited[adj[s][i]]==false)
			dfs(adj[s][i]);
	}
}
void initialise()
{
	for(i=0;i<10;i++)
	visited[i]=false;
}
int main()
{
	int c=0,i,j,nodes,edges,x,y;
	cin>>nodes;
	cin>>edges;
	for(i=0;i<edges;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	initialise();
	
	for(i=1;i<=nodes;i++)
	{
		//cout<<"hi";
		if(visited[i]==false)
		{
			dfs(i);
			cout<<endl;
			c++;
		}
	}
	if(c==1&&edges==nodes-1)
	cout<<"NO. of connected graph = "<<c;
	else
	cout<<"NO";	
	
}
