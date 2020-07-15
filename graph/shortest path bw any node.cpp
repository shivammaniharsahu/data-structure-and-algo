#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
vector<int> ar[100001];
int vis[10001],dist[1001];
//
//void initialise()
//{
//	int i;
//	for(i=0;i<10001;i++)
//	{
//		vis[i]=0;
//	}
//}
void dfs(int node,int d)
{
//	cout<<"hi";
	vis[node]=1;
	dist[node]=d;
	
	for(int child:ar[node])
	{
		if(vis[child]==0)
		dfs(child,dist[node]+1);
	}
	
	
//	for(int i=0;i<ar[node].size();i++)
//	{
//		if(vis[ar[i]==0)
//		{
//			dfs(i,dist[node]+1);
//		}
//	}
	
	
	
}


int main() {
	int n,i,q,a,b;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		ar[a].push_back(b);
		ar[b].push_back(a);	
	}
	//initialise();
	
	dfs(1,0);
	cin>>q;
	int ans=-1,min_city=INT_MAX;
	while(q--)
	{
		int girl_city;
		cin>>girl_city;
		if(dist[girl_city]<min_city)
		{
				min_city= dist[girl_city];
				ans=girl_city;
			
		}
		else
		if(dist[girl_city]==min_city&&girl_city<ans)
		ans=girl_city;
		cout<<ans<< " ";
	}
	cout<<ans;
	cout<<endl;
	return 0;
}
