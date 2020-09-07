#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n,m,i,j;
	    cin>>n>>m;
	    vector<int> v1;
	    int a[n+1][m+1];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            
	            cin>>a[i][j];
	        }
	        
	    }
	    int t=0,b=n-1,l=0,r=m-1,dir=0;
    vector<int> v;
    while(t<=b&&l<=r)
    {
        
        if(dir==0)
        {
            for(int i=l;i<=r;i++)
            {
                cout<<a[t][i]<<" ";
                
            }
            t++;
        }
        
        else if(dir==1)
        {
            
            for(int i=t;i<=b;i++)
            {
                cout<<a[i][r]<<" ";
                
            }
            r--;
            
        }
        
        else if(dir==2)
        {
            
            for(int i=r;i>=l;i--)
            {
                cout<<a[b][i]<<" ";
                
            }
            b--;
            
        }
        
        else if(dir==3)
        {
            
            for(int i=b;i>=t;i--)
            {
                cout<<a[i][l]<<" ";
                
            }
            l++;
            
        }
        dir=(dir+1)%4;
        
    }
//	    v=solve(v,n,m);
//	    for(int i=0;i<v.size();i++)
//	    {
//	        cout<<v[i]<<" ";
//	    }
	    cout<<endl;
	}
	return 0;
}
