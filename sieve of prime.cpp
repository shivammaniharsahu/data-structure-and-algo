#include<bits/stdc++.h>
#include<algorithm>
#define	 ull unsigned long long  
using namespace std;
int main()
{
	ull x,y,i,j;
	cout<<"enter your range from y to x = ";
	cin>>y>>x;
	bool ar[x+1];
	memset(ar,true,x+1);
	
	ar[0]=false;
	
	ar[1]=false;
	for(i=2;i<=x;i++)
	{
		if(ar[i]==true)
		{
			for(j=i*i;j<=x;j+=i)
			{
				ar[j]=false;
			}
		}
	}
	cout<<"All prime numbers are =";
	for(i=y;i<=x;i++)
	{
		if(ar[i]==true)
		cout<<i<<" ";
	}
}
