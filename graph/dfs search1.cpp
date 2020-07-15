#include<bits/stdc++.h>
using namespace std;

 vector <int> adj[100001];
    bool visited[100001]={false};

 void dfs(int s) {
 	
        visited[s]==true;
        
        
        for(int i = 0;i < adj[s].size();++i)    {
         if(visited[adj[s][i]] == false)
         {
         	 cout<<s<<"->";	
			 
             dfs(adj[s][i]);
		 }
        }
    }
int main()
{
    int x, y, nodes, edges;
 	cout<<"Enter No. of Nodes = ";
    cin >> nodes;       // Number of nodes
	
 	cout<<"Enter No. of Edges = ";
    cin >> edges;       // Number of edges

    for(int i = 0;i<edges;++i)
    {
    	cout<<"\nEnter edges value  from(x) to(y) = ";
            cin >> x >> y;
        	adj[x].push_back(y);        // Insert y in adjacency list of x
    }
    cout<<"Your depth first search is\n";
     dfs(1);
     
    cout<<endl<<"SHIVAM MANIHAR SAHU\nROLL NO. - 18115077";
}
