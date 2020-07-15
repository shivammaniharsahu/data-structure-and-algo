 #include <bits/stdc++.h>
 using namespace std;

long long int mod=1000000007;
vector <long long int> adj[100001];
long long int visited[100001];

long long int count1;
void dfs(long long int s) {

        visited[s]=1;
        count1=count1+1;
        for(long long int child:adj[s])
        {
        	if(visited[child]==0)
        	dfs(child);
		}
   }


//    void initialize() {
//        for(int i = 0;i <100001;++i)
//         visited[i] = false;
//    }
int main() {
    	
    	
    	
    	int t;
    	cin>>t;
    	while(t--)
    	{		
    	
    			
        long long int nodes, edges, x, y, connectedComponents = 0;
        cin >> nodes;                       //Number of nodes
        cin >> edges; 
		
		               //Number of edges
        for(long long int i = 1;i <=nodes ;++i) {
         visited[i]=0;                   //Edge from vertex x to vertex y
         adj[i].clear();                   //Edge from vertex y to vertex x
        }

		                      //Number of edges
        for(long long int i = 1;i <=edges;++i) {
         cin >> x >> y;     
     //Undirected Graph 
         adj[x].push_back(y);                   //Edge from vertex x to vertex y
         adj[y].push_back(x);                   //Edge from vertex y to vertex x
        }

//        initialize();                           //Initialize all nodes as not visited

		long long int res=1;
        for(long long int i = 1;i <= nodes;++i) {
         if(visited[i] == false)     {
         	
         	
         	count1=0;
             dfs(i);
             
             res=(res*count1)%mod;
             connectedComponents++;
         }
        }
        cout <<connectedComponents<<" "<<res<< endl;
    		
    		
		}
        return 0;
    }
