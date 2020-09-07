#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		ll n,i,k,j;
		cin>>n>>k;
		ll ar[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			sum+=ar[i];
		}
		ll c=0;
			for(i=0;i<n;i++)
			{
				if(ar[i]>k)
				{
					c=-1;
					break;
				}
			}
			if(c==-1)
			cout<<c;
			else
			{
				ll s=0;
				c=0;
				i=0;
						while(i<n)
						{
							s=s+ar[i];
							if(s>k)
							{
								s=0;
								i--;
								c++;
							}	
							i++;
						}		
						if(s!=0)
						c++;
						cout<<c;
			}
		
		cout<<endl;
		
	}
	
}
