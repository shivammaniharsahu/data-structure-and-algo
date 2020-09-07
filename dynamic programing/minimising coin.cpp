#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll minimisecoin(ll coins[],ll n,ll val)
{
   ll total[val+1],i,j;
   total[0]=0;
   for(i=1;i<=val;i++)
   {
   	total[i]=INT_MAX;
   }
   for(i=1;i<=val;i++)
   {
   					  for(j=0;j<n;j++)
   					  {
   					  				  if(coins[j]<=i)
   					  				  {
   					  				  	ll sub_res=total[i-coins[j]];
   					  				  	if(sub_res!=INT_MAX&&sub_res+1<total[i])
										  total[i]=sub_res+1;
										  //cout<<total[i]<<" ";
							   			}
					  }
   }	
   return total[val];
	   
}
int main()
{
	ll n,m,i,j;
	cin>>n>>m;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	ll res=minimisecoin(ar,n,m);
	if(res==INT_MAX)
	cout<<-1;
	else
	cout<<res;
}
