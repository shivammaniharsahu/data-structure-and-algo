#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> graph[],int fv,int tv)
{
	graph[fv].push_back(tv);

	graph[tv].push_back(fv);

}
void printGraph(vector<int> adj[], int V) 
{ 
    for (int v = 0; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (auto x:adj[v]) 
           cout << "-> " << x; 
        printf("\n"); 
    } 
} 
int main()
{
	int nv,ne;
	int fv,tv;
	
		cout<<"Enter no. vertices=";
		cin>>nv;
		
		cout<<"Enter no. Edges=";
		cin>>ne;
	vector<int> graph[nv];
	int mat[nv][ne]={0},i,j;
	for(int i=0;i<ne;i++)
	{
		
		cout<<"Enter start & end = \n";
		cout<<" start = ";
		cin>>fv;
		cout<<" end = ";
		cin>>tv;
		addEdge(graph,fv,tv);
	}
	printGraph(graph,nv);
		
}
