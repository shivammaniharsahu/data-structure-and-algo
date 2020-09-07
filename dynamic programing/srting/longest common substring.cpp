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
		char x[n],y[m];
		for(i=0;i<n;i++)
		{
			cin>>x[i];	
		}
		for(i=0;i<m;i++)
		{
			cin>>y[i];			
		}
//		string x,y;
//		cin>>x>>y;
		int dp[n+1][m+1];
		
		int max1=0;
		for(i=0;i<n+1;i++)
		{
			//cout<<"hi";
			for(j=0;j<m+1;j++)
			{
			    if(i==0||j==0)
			    dp[i][j]=0;
				else if(x[i-1]==y[j-1])
				{
					dp[i][j]=1+dp[i-1][j-1];
				
					max1=max(max1,dp[i][j]);
				}
				else
				{
					dp[i][j]=0;
				}
			}
		}	
		
		cout<<max1<<"\n";	
		
	}
	return 0;
}
