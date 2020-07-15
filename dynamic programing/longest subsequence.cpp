#include<bits/stdc++.h>
using namespace std;
int longsubsequence(string s1,string s2,int m,int n)
{
	int l[m+1][n+1];
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0||j==0)
			{
				l[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				
				l[i][j]=l[i-1][j-1]+1;
					//cout<<l[i][j]<<" "<<endl;	
		
			}
				
			else
			{
							l[i][j]=max(l[i-1][j],l[i][j-1]);
							
					//cout<<"he"<<l[i][j]<<" "<<endl;			
			}
		}
	}
	//cout<<"hey"<<l[m][n]<<endl;
	return l[m][n];
}
int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int len1,len2;
	len1=s1.length();
	len2=s2.length();
	int ans=longsubsequence(s1,s2,len1,len2);
	cout<<"answer="<<ans<<endl;
}
