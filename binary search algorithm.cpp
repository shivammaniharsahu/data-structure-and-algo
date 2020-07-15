#include<iostream>
using namespace std;
typedef long long int lli;

int bst(lli);
int main()
{
	lli n,i;
	cin>>n;

	printf("%d", bst(n)); 
}
int bst(lli n)
{
	lli dp[n],i,j;
	dp[0]=1;
	dp[1]=1;
	for(i=2;i<=n;i++)
	{
		lli sum=0;
		for(j=1;j<=i;j++)
		{
			sum+=dp[j-1]*dp[i-j];
		}
		dp[i]=sum;
	}
	
	return dp[n];
}
