// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

int maxCities(vector<vector<char>> &a, int n, int m);


// Driver code to test above functions
int main()
{

    
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> a(n, vector<char>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }

        cout << maxCities(a, n, m) << "\n";

    }


    return 0; 
}// } Driver Code Ends

int no=0;
    void  dfs(vector<vector<char>>& mat,int i,int j,int n,int m)
    {
        if(i<0||i>=n||j<0||j>=m||mat[i][j]!='#')
            return;
        mat[i][j]='2';
        no++;
        dfs(mat,i+1,j+1,n,m);
        dfs(mat,i-1,j-1,n,m);
        dfs(mat,i-1,j+1,n,m);
        dfs(mat,i+1,j-1,n,m);
        dfs(mat,i+1,j,n,m);
        dfs(mat,i-1,j,n,m);
        dfs(mat,i,j+1,n,m);
        dfs(mat,i,j-1,n,m);
        
    }
int maxCities(vector<vector<char>> &ar, int n, int m)
{       
    
    
    if(ar.size()==0)
    return 0;
    int i,j;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]=='*')
            {
                
                if(j-1>=0&&i-1>=0)
                {
                    if(ar[i-1][j-1]!='*')
                        ar[i-1][j-1]='#';
                }
                if(j+1<=m-1&&i+1<=n-1)
                {
                    
                    if(ar[i+1][j+1]!='*')
                        ar[i+1][j+1]='#';
                }
                if(j+1<=m-1&&i-1>=0)
                {
                    
                    if(ar[i-1][j+1]!='*')
                        ar[i-1][j+1]='#';
                }
                
                if(j-1>=0&&i+1<=n-1)
                {
                    
                    if(ar[i+1][j-1]!='*')
                        ar[i+1][j-1]='#';
                }
                if(j+1<=m-1)
                {
                    
                    if(ar[i][j+1]!='*')
                        ar[i][j+1]='#';
                }
                if(i+1<=n-1)
                {
                    
                    if(ar[i+1][j]!='*')
                        ar[i+1][j]='#';
                }
                if(i-1>=0)
                {
                    
                    if(ar[i-1][j]!='*')
                        ar[i-1][j]='#';
                        
                }
                if(j-1>=0)
                {
                    
                    if(ar[i][j-1]!='*')
                    ar[i][j-1]='#';
                }
            }

        }
    }
    
        int mx=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                no=0;
                if(ar[i][j]=='#')
                {
                    dfs(ar,i,j,n,m);
                    mx=max(no,mx);
                }
                
            }
        }
        return mx;
}
