#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
	lli n,m,i,c=0,f=0;
	cin>>n>>m;
	if(n==m)
	{
		cout<<0;
	}
	else if(m%n!=0)
	{
		cout<<-1;
	}
	else
	{
	 		m=m/n;
			while(m!=0)
			{
				 if(m%6==0)
				 {
				 	m=m/6;
				 	
			 		c=c+2;
				 }
				 else if(m%3==0)
				 {
				 	m=m/3;		 		
			 		c=c+1;
				 }
				 else if(m%2==0)
				 {
				 	m=m/2;
			 		c=c+1;
				 }
				 else if(m==1)
				 {
				 	break;
				 }	
		 		else
				 {
				 	f=1;
				 	break;
				 }
				 cout<<m<<" ";
			}	
			if(f==0)
			cout<<c;
			else
			cout<<-1;
	}
}
