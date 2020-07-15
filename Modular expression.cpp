#include<bits/stdc++.h>
using namespace std;
int modulo(int x,int n,int m)
{
	int y;
	int i;
	if(n==0)
		return 1;
	else if (n%2==0)
	{
		y=modulo(x,n/2,m);
		return (y*y)%m;
	}
	else
	{
		i=(x%m)*modulo(x,n-1,m);
		return (i)%m;
	}
}



int main()
{
	int n,m,x;
	cout<<"enter value=";
	cin>>x;
	cout<<"enter power=";
	cin>>n;
	cout<<"enter modulo=";
	cin>>m;
	int mod=modulo(x,n,m);
	cout<<"Answer = "<<mod;
}

