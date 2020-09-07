#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool subsetsum(int ar[],int n,long sum)
{
	
			bool dp[n+1][sum+1];
			int i,j;
			for(i=1;i<sum+1;i++)
			{
				dp[0][i]=false;
			}
			for(i=0;i<n+1;i++)
			{
				dp[i][0]=true;
			}
			dp[0][0]=true;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=sum;j++)
				{
					if(ar[i-1]<=j)
					{
						dp[i][j]=dp[i-1][j-ar[i-1]] || dp[i-1][j];
					}
					else
					{
						dp[i][j]=dp[i-1][j];
					}
					
				}	
				
			}		
			return dp[n][sum];
				

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
				sum=sum+ar[i];
			}
			if(sum%2==0)
			{
					
				if(subsetsum(ar,n,sum/2))
				 cout<<"YES";
				 else
				 cout<<"NO";	
			}
			else
			{
				cout<<"NO";
			}
			cout<<endl;
	}
	return 0;
}
