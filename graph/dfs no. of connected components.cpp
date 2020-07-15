 #include <iostream>
   #include <vector>
    using namespace std;

    vector <int> adj[100001];
    bool visited[100001];

    void dfs(int s) {
        visited[s] = true;
	         cout<<s<<" ";
        for(int i = 0;i < adj[s].size();++i)    {
         if(visited[adj[s][i]] == false)
         {
	          					   
	         //cout<<s<<" ";
	             dfs(adj[s][i]);	
		 }
        }
    }

    void initialize() {
        for(int i = 0;i <100001;++i)
         visited[i] = false;
    }

    int main() {
        int nodes, edges, x, y, connectedComponents = 0;
        cin >> nodes;                       //Number of nodes
        cin >> edges;                       //Number of edges
        for(int i = 0;i < edges;++i) {
         cin >> x >> y;     
         adj[x].push_back(y);                   //Edge from vertex x to vertex y
         adj[y].push_back(x);                   //Edge from vertex y to vertex x
        }
                    //Initialize all nodes as not visited

        for(int i = 1;i <= nodes;++i) {
         if(visited[i] == false)     {
             dfs(i);
             
             connectedComponents++;
         }
        }
        cout << "Number of connected components: " << connectedComponents << endl;
        return 0;
    }
