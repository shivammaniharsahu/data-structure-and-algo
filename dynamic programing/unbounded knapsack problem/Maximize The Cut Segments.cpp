#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int rodcutting(int ar[],int n)
{
	
			int dp[n+1][n+1];
			int i,j;
			
			for(i=0;i<=n;i++)
			{
				for(j=0;j<=n;j++)
				{
					if(i==0||j==0)
					dp[i][j]=0;
					
					else if(ar[i-1]<=n)
					{
						dp[i][j]=max(ar[i-1]+dp[i][j-ar[i-1]],dp[i-1][j]);
					}
					else
					{
						dp[i][j]=dp[i-1][j];
					}
				}	
			}	
			return dp[n][n];

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
			for(i=0;i<3;i++)
			{
				cin>>ar[i];	
			}
			cout<<rodcutting(ar,n);
			cout<<endl;
	}
	return 0;
}
