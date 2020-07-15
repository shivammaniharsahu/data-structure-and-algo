#include<bits/stdc++.h>
#define lli  int
using namespace std;
int parent[100001];
lli find(lli a)
{
	if(parent[a]<0)
	return a;
	else
	return parent[a]=find(parent[a]);
}
void unionn(lli a,lli b)
{
	parent[a]=min(parent[a],parent[b]);
	parent[b]=a;
}
int main()
{
	lli n,m,a,b,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		parent[i]=-i;
	}
	for(i=1;i<=m;i++)
	{
		cin>>a>>b;
		a=find(a);
		b=find(b);
		if(a!=b)
			unionn(a,b);
	}
	lli q,x,y;
	cin>>q;
	while(q--)
	{
		cin>>a>>b;
		x=a,y=b;
		a=find(a),b=find(b);
		if(a==b)
			cout<<"TIE\n";
		else
		{
			if(parent[a]<parent[b])
			cout<<x<<endl;
			else
			cout<<y<<endl;
			
		}
	}
	
	
	
}
