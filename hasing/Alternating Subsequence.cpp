#include<bits/stdc++.h>
using namespace std;
int main()
 {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j,s,f=0,sum=0,c=0;
		cin>>n;
		long long int ar[n];
		for(i=0;i<n;i++)
		{
			cin>>ar[i];	
		}
		for(i=0;i<n;i++)
		{
			s=0;
			while(ar[i]>=0&&i<n)
			{
				s=max(ar[i],s);
				i++;	
				if(ar[i]<0)
				{
					break;
				}		
			}
			sum=s+sum;
			s=INT_MIN;
			while(ar[i]<0&&i<n)
			{
				s=max(ar[i],s);
				i++;
				if(ar[i]>=0)
				{
					i--;
					break;
				}		
			}
			
}
