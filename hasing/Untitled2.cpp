#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j,s;
		string ss;
		char ch;
		cin>>n>>m>>ch;
		int ar[20],br[20];
		int nn=n,k=0,l=0;
		while(nn!=0)
		{
			ar[k++]=nn%2;
			nn/=2;	
		}
		
		for(i=0;i<=16-k;i++)
		{
			br[l++]=0;
		}
		l--;
		for(i=k-1;i>=0;i--)
		{
			br[l++]=ar[i];
		}	
		
		for(i=0;i<16;i++)
		{
			cout<<br[i];
		}	
		
		
	}
}

