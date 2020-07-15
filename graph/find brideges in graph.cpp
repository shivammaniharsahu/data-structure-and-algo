 #include <bits/stdc++.h>
 using namespace std;

long long int mod=1000000007;
vector <long long int> adj[100001];
long long int visited[100001],low[100001],in[100001],vis[100001];
int timer=0;
void dfs(int node,int par)
{
	visited[node]=1;
	in[node]=low[node]=timer;
	timer++;
	for(int child:adj[node])
	{
		if(child==par)
			continue;
		if(visited[child]==1)
		{
			//edge node dhild is back edge
			low[node]=min(low[node],in[child]);
		}
		else
		{
			//edge node-child foward edge
			dfs(child,node);
			if(low[child]>in[node])
			cout<<node<<" - "<<child<<"is brideg";
			low[node]=min(low[node],low[child]);
			
		}
	}	
}




int main() {
    	
    	
    	
    	int t;
    	cin>>t;
    	while(t--)
    	{		
    	
    			
        long long int nodes, edges, x, y, connectedComponents = 0;
        cin >> nodes;                    
        cin >> edges; 
		
	    for(long long int i = 1;i <=nodes ;++i) {
         		visited[i]=0;                   
		   		adj[i].clear();       
		}

	   for(long long int i = 1;i <=edges;++i) {
         	cin >> x >> y;     
       		adj[x].push_back(y);                  
	    	adj[y].push_back(x);                   
		}
		dfs(1,-1);
		cout<<endl;
	}
        return 0;
    }
