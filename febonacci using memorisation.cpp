#include<iostream>
#define max 10000
//#define nil -1
using namespace std;
typedef long long int lli;

int lookup[max];

lli febo(lli n)
{

	if(lookup[n]==-1)
	{
		
		if(n<=1)
		{
			lookup[n]=n;
		}
		else
		{
			lookup[n]=febo(n-1)+febo(n-2);			
		}
	}
	
	return lookup[n];
}


int main()
{
	lli n,i;
	cin>>n;
	
	for(i=0;i<max;i++)
	{
		lookup[i]=-1;
	}
	lli ar[n];

	printf("%d", febo(n)); 
}
