#include<bits/stdc++.h>
using namespace std;
struct edge{
	int a;
	int b;
	int w;
};

edge ar[100001];
int par[100001];
int find(int a)
{
	if(par[a]==-1)
		return a;
	return par[a]=find(par[a]);
}
bool comp(edge a,edge b)
{
	if(a.w<b.w)
	return true;
	else
	return false;
}
void merge(int a,int b)
{
	par[a]=b;
}

int main()
{
	int n,m,a,b,w,i,sum=0;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	par[i]=-1;
	for(i=0;i<m;i++)
	{
		cin>>ar[i].a>>ar[i].b>>ar[i].w;
	}
	sort(ar,ar+m,comp);
	for(i=0;i<m;i++)
	{
		a=find(ar[i].a);
		
		b=find(ar[i].b);
		if(a!=b)
		{
			sum=sum+ar[i].w;
			merge(a,b);
		}
	}
	cout<<sum<<endl;
}
