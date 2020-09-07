#include<bits/stdc++.h>
using namespace std;

int longestPalindromeSubseq(string s) {
        
        string rev,s1;
        s1=s;
        reverse(s1.begin(),s1.end());
        rev=s1;
        int i,j,n,m;
        n=s.length();
        m=rev.length();
        int dp[n+1][m+1];
		for(i=0;i<n+1;i++)
		{
			for(j=0;j<m+1;j++)
			{
			    if(i==0||j==0)
			    dp[i][j]=0;
				else if(s[i-1]==rev[j-1])
				{
					dp[i][j]=1+dp[i-1][j-1];
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
	//code
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j;
		int dp[n+1][m+1];
		string s;
		cin>>s;		
	
		cout<<longestPalindromeSubseq(s)<<"\n";	
		
	}
	return 0;
}
