#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int subsetsum(int ar[],int n,long sum)
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
						dp[i][j]=dp[i-1][j];
					
					if(ar[i-1]<=j)
					{
						dp[i][j]=dp[i-1][j-ar[i-1]] | dp[i][j];
					}
					
					
					
				}	
				
			}		
			vector<int> v;
			
			
			for(i=(sum)/2;i>=0;i--)
			{
				if(dp[n][i]==true)
				{
				v.push_back(i);
				}
				
			}
			int min1=INT_MAX;
			long range=sum;
			for(i=0;i<v.size();i++)
			{
				if(min1>range-2*v[i])
				{
					min1=range-2*v[i];
				
				}
				
			}
			return min1;

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
			cout<<subsetsum(ar,n,sum);
			cout<<endl;
	}
	return 0;
}
