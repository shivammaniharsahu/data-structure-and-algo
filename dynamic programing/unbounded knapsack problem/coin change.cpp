#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int coinchange(int coin[], int n,int target) 
{ 
			int dp[target+1][n+1];
			int i,j;
			for(i=0;i<target+1;i++)
			{
					
				for(j=0;j<n+1;j++)
				dp[i][j]=0;	
			}
			
			dp[0][0]=1;
			
			for(i=0;i<=target;i++)
			{
				for(j=0;j<=n;j++)
				{
					if(coin[i-1]<=j)
					{
						dp[i][j]=dp[i][j-coin[i-1]]+dp[i-1][j];
					}
					else
					{
						dp[i][j]=dp[i-1][j];
					}
				}	
			}	
			return dp[target-1][n-1];
   
} 


int main()
{ 
	int t;
	cin>>t;
	while(t--)
	{
			int n,w;
			cin>>n;
			int ar[n];
			long  i,j,sum=0;
			for(i=0;i<n;i++)
			{
				cin>>ar[i];	
			}
			int target;
			cin>>target;
			cout<<coinchange(ar,n,target);
			cout<<endl;
	}
	return 0;
}
