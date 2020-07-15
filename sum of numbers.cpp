#include<bits/stdc++.h>
#include<algorithm>
#define	 ull unsigned long long  
using namespace std;
int main()
{
	ull i,x,n,k,j;
	cin>>n>>k;
	ull ar[n];
	
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(i==j)
			{
				continue;
				
			}
			else
			{
				
				if(ar[i]+ar[j]==k)
				{
					cout<<ar[i]<<" + "<<ar[j]<<" ";
				}	
			}
		}
	}
}
