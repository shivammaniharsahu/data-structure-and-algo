#include<bits/stdc++.h>
using namespace std;
int vis[10001];
vector<int> adj[10001];
int in[10001];
vector<int> res;
bool toposort(int n)
{
    priority_queue<int,vector<int>,greater <int> > pq;
    int i;
    for(i=1;i<=n;i++)
    {
        if(in[i]==0)
        pq.push(i);
    }
    while(!pq.empty())
    {
        int curr=pq.top();
        res.push_back(curr);
        pq.pop();
        for(int child : adj[curr])
        {
            in[child]--;
            if(in[child]==0)
            {
                pq.push(child);
            }
        }
        
    }
    int l=res.size();
    if(l==n)
    return true;
    else 
    return false;
    
}

int main()
{
    int n,m,a,b,i;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        in[b]++;        
    }
    if(!toposort(n))
    {
        cout<<"Sandro fails.";
    }
    else
    {
        int nn=res.size();
        for(i=0;i<nn;i++)
        {
            cout<<res[i]<<" ";
        }
    }
}

