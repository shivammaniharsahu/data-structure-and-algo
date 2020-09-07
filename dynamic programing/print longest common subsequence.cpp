#include<bits/stdc++.h>
using namespace std;
 vector<int>  printlcs(int  ar[],int br[],int n,int m)
 {
 	int dp[n+1][m+1],i,j;
 	for(i=0;i<n+1;i++)
	{
		for(j=0;j<m+1;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(ar[i-1]==br[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
			
		}
	}
	vector<int> v;
	i = n, j = m; 
	int index=dp[n][m];
	while(i>0&&j>0)
	{
		if(ar[i-1]==br[j-1])
		{
			v.push_back(ar[i-1]);
			i--;
			
			j--;
		}
		else
		{
				if(dp[i-1][j]>dp[i][j-1])
				{
					i--;
				}
				else
				{
					j--;
				}	
		}
		 
	}
	reverse(v.begin(),v.end());
	return v;
}

int main()
{	
	int n,m;
	cin>>n>>m;
	int ar[n],br[m],i,j;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(j=0;j<m;j++)
	{
		cin>>br[j];
	}
	vector<int> v;
	v=printlcs(ar,br,n,m);
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
