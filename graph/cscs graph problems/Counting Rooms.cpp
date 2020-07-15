 #include <iostream>
   #include <vector>
    using namespace std;

    vector <int> adj[100001];
    bool visited[100001];

    void dfs(int s) {
        visited[s] = true;
        for(int i = 0;i < adj[s].size();++i)    {
         if(visited[adj[s][i]] == false)
             dfs(adj[s][i]);
        }
    }

    void initialize() {
        for(int i = 0;i <100001;++i)
         visited[i] = false;
    }

    int main() {
        int nodes, edges, x, y, connectedComponents = 0;
        cin >> nodes;                       //Number of nodes
        cin >> edges;
		string br[nodes];                       //Number of edges
        for(int i = 1;i <=nodes;++i) {
     			cin>>br[i];	
		cout<<br[i]<<"\n ";
	    }
	    for(int i = 1;i <=nodes;++i) {
     			
     					cout<<br[i]<<" ";
				 for(int j=1;j<=edges;j++)
     			{
     				
     				if(br[i][j]=='.')
     				{
     					cout<<br[i][j]<<" ";
     				 		adj[i].push_back(j);
     						adj[j].push_back(i);				
					 }
     			}
     			
	    }
        for(int i = 1;i <= nodes;++i) {
         if(visited[i] == false)     {
             dfs(i);    
             connectedComponents++;
         }
        }
        cout << "Number of connected components: " << connectedComponents << endl;
        return 0;
    }
