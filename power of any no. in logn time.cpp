#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod=1;
int main()
{
	long long a,res=1,n;
	cout<<"base";
	cin>>a;
	cout<<"power";
	cin>>n;
	while(n)
	{
		if(n%2)
		{
		 	   
		res=(res*a)%mod;
		n--;	
		}
		else
		{
		 	
			a=(a*a)%mod;
			n/=2;	
		}
	}
	cout<<res;
}
