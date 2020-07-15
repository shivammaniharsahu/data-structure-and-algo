#include <bits/stdc++.h>
//#define long long int lli
using namespace std; 
int main() 
{ 
	long long int n,k,c,i,sum,j,q;
	cin>>n>>q;
	long long int ar[n],br;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];	
	}
		sort(ar,ar+n);

	for(i=0;i<q;i++)
	{
		cin>>br;
		c=n;
		cout<<c;
		sum=0;
		while(c>0)
		{
			sum=sum+ar[j];
			c=c-(br+1);
		
		}
		
		cout<<sum<<endl;
		
	}

    return 0; 
} 
