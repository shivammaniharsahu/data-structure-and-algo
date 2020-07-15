#include<iostream>
using namespace std;
typedef long long int lli;
lli febo(int);
int main()
{
	lli n,i;
	cin>>n;
	cout<<febo(n);
}
lli febo(lli n)
{
	lli f[n+1];
	lli i;
	f[0]=0;
	f[1]=1;
	for(i=2;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	return f[n];
}
