#include<bits/stdc++.h>
using namespace std;

   
 int LCS(string a,string b)
{
	int n=a.length();
	int m=b.length();
	int dp[n+1][m+1],i,j;
	for(i=0;i<n+1;i++)
	{
		for(j=0;j<m+1;j++)
		{
			if(i==0||j==0)
			{
			dp[i][j]=0;	
			}
			else if(a[i-1]==b[j-1])
			{
					dp[i][j]=dp[i-1][j-1]+1;	
			}
			else
			{
					dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
			
		}
	}
	
	return dp[n][m];
	
}

int main()
{
		int t;
		cin>>t;
		while(t--)
		{
			string s1,s2;
			cin>>s1;
			cin>>s2;
			int a;
			a=s1.length()+s2.length();
			int ans=LCS(s1,s2);
			ans=a-ans;
			cout<<ans<<endl;	
			
		}	
	
	
}
