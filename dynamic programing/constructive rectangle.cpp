#include<bits/stdc++.h>
#define ll  long long int 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll mod,p,n,i,k,j,res,m=0,sum=0,c=0;
		cin>>n;
		ll ar[n],br[n];
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			cin>>br[i];
		}
		for(i=0;i<n;i++)
		{
			mod=br[i]%4;
			//cout<<mod<<" ";
			if(mod==2||mod==3)
			{	c++;
				if(c==1)
				{
					p=2*ar[i];
				}
				if(c==2)
				{
					sum=sum+p+2*ar[i];
					c=0;
				}
			}
			res=br[i]/4;
			//cout<<res<<" ";
			sum=sum+res*ar[i]*4;
			//cout<<sum<<endl;
		}
		cout<<sum<<endl;	
	}
	return 0;
}
