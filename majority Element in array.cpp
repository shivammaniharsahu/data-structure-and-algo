#include<iostream>
using namespace std;
int main()
{
	int i,j,n,count[100],s,ar[100],f=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{	s=0;
		for(j=i;j<n;j++)
		{
			if(ar[j]==ar[i])
			{
				s++;
			}
		}
		count[i]=s;
	}
	for(i=0;i<n;i++)
	{
		if(count[i]>n/2)
		{
			cout<<"majority element ="<<ar[i];
			f=1;
		}
	}
	if(f==0)
	{
		cout<<"No majority element present in your array";
	}
}
