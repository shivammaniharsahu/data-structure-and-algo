#include<bits/stdc++.h>
using namespace std;
 string printscs(string s1,string s2)
 {
 	int n=s1.length();
 	int m=s2.length();
 	int dp[n+1][m+1],i,j;
 	for(i=0;i<n+1;i++)
	{
		for(j=0;j<m+1;j++)
		{
			if(i==0)
			dp[i][j]=j;
			else if(j==0)
			dp[i][j]=i;
			else if(s1[i-1]==s2[j-1])
			{
				
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=1+min(dp[i][j-1],dp[i-1][j]);
			}
			
		}
	}
	string s;
	
	int index=dp[n][m];
	i = n, j = m; 
	while(i>0&&j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
			s.push_back(s1[i-1]);
			i--;
			index--;
			j--;
		}
		else
		{
				if(dp[i-1][j]>dp[i][j-1])
				{
					s.push_back(s2[j-1]);
					j--;
					index--;		
				}
				else
				{
					s.push_back(s1[i-1]);
					i--;
					index--;
				}	
		}
		 
	}
	while(i>0)
	{
		
					s.push_back(s1[i-1]);
					i--;
					
					index--;
	}
	while(j>0)
	{
		
					s.push_back(s2[j-1]);
					j--;
					
					index--;
	}
	
	reverse(s.begin(),s.end());
	return s;
	
 }

int main()
{
	
	string s,s1,s2;
	cin>>s1;
	cin>>s2;
	s=printscs(s1,s2);
	cout<<s;
	
	
	
}
