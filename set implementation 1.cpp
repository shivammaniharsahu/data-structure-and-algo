#include<bits/stdc++.h>
#define	lli long long int   
using namespace std;
int main()
{
	lli t;
	while(t--)
	{
			lli i,n,j,m;	
			set<lli> ss;
			cin>>n>>m;
			int ar,br;
			for(i=0;i<n;i++)
			{
				cin>>ar;
				ss.insert(ar);
			}
			for(i=0;i<m;i++)
			{
				cin>>br;
				if(ss.find(br)!=ss.end())
					cout<<"YES\n";
				else
				{
					cout<<"NO\n";
					ss.insert(br);
				 } 
			}
	}
  
}
